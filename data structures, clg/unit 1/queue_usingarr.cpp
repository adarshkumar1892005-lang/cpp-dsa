#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        cout << "overflow condition\n";
    }
    else if (front == -1 && rear == -1)
    {
        rear++;
        front++;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "underflow condition\n";
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        cout << "deleted element is " << queue[front] << endl;
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "element at front is " << queue[front] << endl;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        cout << "underflow condition\n";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    dequeue();
    enqueue(3);
    enqueue(2);
    enqueue(1);
    display();
    dequeue();
    dequeue();
    dequeue();
    peek();

    return 0;
}