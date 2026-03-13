#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *link;
};
stack *top = 0;

void push(int x)
{
    stack *newstack = new stack;
    newstack->data = x;
    newstack->link = top;
    top = newstack;
}

void pop()
{
    if (top == 0)
    {
        cout << "underflow condition\n";
    }
    else
    {
        stack *temp = top;
        cout << "popped element is " << " " << top->data;
        cout << endl;
        top = top->link;
        delete temp;
    }
}

void peek()
{
    if (top == 0)
    {
        cout << "underflow condition\n";
    }
    else
    {
        cout << "top element is " << top->data << endl;
    }
}

void display()
{
    if (top == 0)
    {
        cout << "underflow condition\n";
    }
    else
    {
        stack *temp = top;
        cout << "The stack is :-\n";
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
}

int main()
{
    push(3);
    push(6);
    push(9);
    push(12);
    display();
    pop();
    peek();
    display();

    return 0;
}