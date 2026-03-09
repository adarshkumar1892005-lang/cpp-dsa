#include <iostream>
using namespace std;

// implementation of queue using linked list //
struct node
{
    int data;
    node *next;
};
node *front = 0; // front as head
node *rear = 0; // rear as tail

void enqueue(int x) // for adding element in queue
{
    node *newnode = new node; // initialising newnode
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)  // for empty queue 
    {
        front = newnode;
        rear = newnode;
    }
    else //if queue is not empty 
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()  // for deleting element at front
{
    if (front == 0 && rear == 0) // for underflow condition
    {
        cout << "underflow condition\n";
    }
    else
    {
        node *temp = front;
        cout << "deleted element is " << front->data << endl;
        front = front->next;
        if (front == 0) // for setting rear to 0 if if queue is empty
        {
            rear =0;
        }
        
        delete temp; // for deleting element at front
    }
}

void seek()  // to display the rear element
{
    if (front == 0 && rear == 0)  // for checking underflow condition
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "element at the rear is " << rear->data << endl;
    }
}

void display() //for displaying queue
{   if (front ==0 && rear == 0)  // checking underflow condition
    {
        cout << "underflow condition\n";
    }
    else
    {
    cout << "the queue is :- \n";
    for (node *temp = front; temp != 0; temp = temp -> next)
    {
        cout << temp -> data << " " ;
    }
    cout << endl;}
}

int main()
{
    enqueue(3);
    enqueue(2);
    seek();
    dequeue();
    dequeue();
    display();
    seek();


    return 0;
}