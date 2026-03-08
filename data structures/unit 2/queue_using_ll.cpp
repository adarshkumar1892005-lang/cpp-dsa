#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *front = 0;
node *rear = 0;

void enqueue(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = newnode;
        rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    if (front == 0 && rear == 0)
    {
        cout << "underflow condition\n";
    }
    else
    {
        node *temp = front;
        cout << "deleted element is " << front->data << endl;
        front = front->next;
        delete temp;
    }
}

void seek()
{
    if (front == 0 && rear == 0)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "element at the rear is " << rear->data << endl;
    }
}

void display()
{
    node* temp = front;
    cout << "the queue is :- \n";
    for (node *temp = front; temp != 0; temp = temp -> next)
    {
        cout << temp -> data << " " ;
    }
    cout << endl;
}

int main()
{
    enqueue(3);
    enqueue(2);
    enqueue(6);
    display();
    dequeue();
    seek();

    return 0;
}