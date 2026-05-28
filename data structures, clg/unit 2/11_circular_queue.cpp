#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *front = nullptr;
node *rear = nullptr;

void enqueue(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = nullptr;
    if (front == nullptr)
    {
        front = newnode;
        rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue()
{
    node *temp = front;
    if (front == nullptr)
    {
        cout << "underflow condition\n";
        return;
    }
    else if (front == rear)
    {
        front = nullptr;
        rear = nullptr;
        delete temp;
    }
    else
    {
        front = front->next;
        rear->next = front;
        delete temp;
    }
}

void peek()
{
    if (front == nullptr)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "element at front is " << front->data << endl;
    }
}

void display()
{
    if (front == nullptr)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "the queue is :-\n";
        for (node *temp = front; temp != rear; temp = temp->next)
        {
            cout << temp->data << " ";
        }
        cout << rear->data << endl;
    }
}
int main()
{
    enqueue(3);
    enqueue(6);
    enqueue(9);
    display();
    dequeue();
    dequeue();
    peek();
    enqueue(2);
    enqueue(4);
    display();

    return 0;
}