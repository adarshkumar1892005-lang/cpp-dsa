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

void createDLL(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = nullptr;
    newnode->prev = tail;
    if (head == nullptr)
    {
        head = tail = newnode;
        return;
    }
    else
    {
        tail->next = newnode;
    }
    tail = newnode;
}

void delete_at_any_pos(int pos)
{
    int count = 0;
    for (node *i = head; i != nullptr; i = i->next)
    {
        count++;
    }
    if (pos > count || pos <= 0)
    {
        cout << "invalid position\n";
        return;
    }
    else if (pos == 1)
    {
        node *temp = head;
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        return;
    }
    else if (pos == count)
    {
        node *temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete temp;
        return;
    }
    else
    {
        node *cur = head;
        for (int i = 1; i < pos; i++)
        {
            cur = cur->next;
        }
        node *prevnode = cur->prev;
        node *nextNode = cur->next;
        prevnode->next = nextNode;
        nextNode->prev = prevnode;
        delete cur;
        return;
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
        for (node *i = head; i != nullptr; i = i->next)
        {
            cout << i->data << " ";
        }
        cout << endl;
    }
}

int main()
{
    createDLL(1);
    createDLL(2);
    createDLL(3);
    createDLL(4);
    createDLL(5);
    delete_at_any_pos(1);
    delete_at_any_pos(4);
    
    display();

    return 0;
}