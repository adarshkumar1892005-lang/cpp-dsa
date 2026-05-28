#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top = -1;

void push(int x)
{
    if (top == N - 1)
    {
        cout << "overflow condition\n";
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "underflow condition\n";
    }
    else
    {
        int item = stack[top];
        top--;
        cout << "popped " << " " << item;
        cout << endl;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "top item is " << " " << stack[top];
        cout << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "stack is :-\n";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    push(5);
    push(8);
    push(0);
    push(3);
    push(2);
    display();
    pop();
    display();
    pop();
    peek();
    display();
    return 0;
}