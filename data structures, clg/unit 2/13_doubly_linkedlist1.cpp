#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};
node *head = nullptr;
node *tail = nullptr;

void createlist(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = nullptr;
    newnode->prev = tail;
    if (head == nullptr)
    {
        head = newnode;
    }
    else
    {
        tail->next = newnode;
    }
    tail = newnode;
}

void insert_at_any_position(int x, int pos)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = nullptr;
    newnode->prev = nullptr;
    int count = 0;
    for (node *t = head; t != nullptr; t = t->next)
    {
        count++;
    }
    if (pos <= 0 || pos > count + 1)
    {
        cout << "invalid position \n";
        delete newnode;
        return;
    }
    else if (pos == 1)
    {
        newnode->prev = nullptr;
        newnode->next = head;
        if (head != nullptr)
            head->prev = newnode;
        else
            head = newnode;
        head = newnode;
        return;
    }
    else if (pos == count + 1)
    {
        newnode->prev = tail;
        if (head != nullptr)
            tail->next = newnode;
        else
            tail = newnode;
        tail = newnode;
    }
    else
    {
        node *temp = head;
        node *tempnext = head;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
            tempnext = temp->next;
        }
        temp->next = newnode;
        newnode->next = tempnext;
        newnode->prev = temp;
        tempnext->prev = newnode;
    }
}
void display()
{
    if (head == nullptr)
    {
        cout << "underflow condition\n";
    }
    else
    {
        for (node * t  = head ; t != nullptr; t = t->next)
        {
            cout << t-> data << " ";
        }
        cout << endl;
        
    }
    
}
    int main()
    {
        createlist(5);
        createlist(7);
        createlist(8);
        insert_at_any_position(6, 2);
        display();

        return 0;
    }