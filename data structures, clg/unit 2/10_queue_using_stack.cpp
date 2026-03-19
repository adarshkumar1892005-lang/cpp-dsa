#include <iostream>
using namespace std;

#define N 5
int stack1[N], stack2[N];
int top1 = -1;
int top2 = -1;

void push1(int x)
{
    if (top1 == N - 1)
    {
        cout << "overflow condition \n ";
    }
    else
    {
        top1++;
        stack1[top1] = x;
    }
}

void push2(int x)
{
    if (top2 == N - 1)
    {
        cout << "overflow condition \n ";
    }
    else
    {
        top2++;
        stack2[top2] = x;
    }
}

int pop1()
{
    return stack1[top1--];
}

int pop2()
{
    return stack2[top2--];
}

int count = 0;
void enqueue(int x)
{
    push1(x);
    count++;
}

void dequeue()
{
    if (top1 == -1)
    {
        cout << "underflow condition \n";
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            int a = pop1();
            push2(a);
        }
        pop2();
        count--;
        for (int i = 0; i < count; i++)
        {
            int b = pop2();
            push1(b);
        }
    }
}

void display()
{
    if (top1 == -1)
    {
        cout << "underflow condition \n";
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            cout << stack1[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue(3);
    
    display();
    dequeue();
    enqueue(5);
    display();

    return 0;
}