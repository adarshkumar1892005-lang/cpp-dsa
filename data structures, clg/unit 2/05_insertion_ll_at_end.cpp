#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = nullptr;

void printlinkedlist()
{
    for (node *cur = head; cur != nullptr; cur = cur->next)
    {
        cout << cur->data << " ";
    }
}

void insertatend(int value)
{
    node* temp = head;
    node* newnode = new node;
    newnode -> data = value;
    newnode -> next = nullptr;
    while (temp -> next !=nullptr)
    {
        temp = temp->next;
    }
    temp -> next = newnode;
    
}

int main()
{
    node *n1 = new node{10, nullptr};
    node *n2 = new node{12, nullptr};
    node *n3 = new node{13, nullptr};
    head = n1;
    n1->next = n2;
    n2->next = n3;

    insertatend(15);
    printlinkedlist();
    return 0;
}