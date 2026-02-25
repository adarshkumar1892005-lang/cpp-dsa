#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = nullptr;

void display()
{
    cout << "the list is:- " << endl;
    for (node *cur = head; cur != nullptr; cur = cur->next)
    {
        cout << cur->data << " ";
    }
    cout << endl;
    cout << endl;
}

void getlist(int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;
    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    node* temp = head;
    while (temp->next != nullptr )
    {
        temp = temp->next;
    }
    temp -> next = newnode;
    
}

void reverselist()
{
    node *prevnode = 0, *currentnode = head, *nextnode = head;
    while (currentnode != nullptr)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    cout << "list is reversed \n";
}

int main()
{
    getlist(10);
    getlist(20);
    getlist(30);
    getlist(40);
    display();
    reverselist();
    display();
    return 0;
}