#include <iostream>
using namespace std;

#define N 5
int queue[N];
int rear = -1;
int front = -1;

void enqueue(int x)
{
    if (rear == -1 && front == -1)
    {
        rear = 0;
        front = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        cout << "overflow condition\n";
    }
    else
    {
        rear = (rear + 1) % N;
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
        front = (front + 1) % N;
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
        cout << "the element at rear is "<< " " << queue[rear] << endl;
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
        cout << "the queue is :- \n";
        for (int i = front; i != rear; i = (i + 1) % N)
        {
            cout << queue[i] << " ";
        }
        cout << queue[rear];
        cout << endl;
    }
}

int main() {
    enqueue(5);
    enqueue(6);
    dequeue();          // remove 5
    enqueue(7);
    enqueue(8);
    dequeue();          // remove 6
    display();          // check order of remaining elements
}





