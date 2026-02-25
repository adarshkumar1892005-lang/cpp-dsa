#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head = 0;

void createlist(int value)
{
    node* newnode = new node();
    newnode -> data = value;
    newnode -> next = 0;
    if (head == 0) 
    {
        head = newnode;
        return;
    }
    node* temp = head;
    while (temp-> next != 0)
    {
        temp  = temp -> next;
    }
    temp -> next = newnode;
}

node* reverse(node* head)
{
    node* prevnode = 0;
    node* currentnode = head;
    node* nextnode;
    while (currentnode !=0)
    {
        nextnode = currentnode -> next;
        currentnode -> next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    return prevnode ;
}

void display()
{
    cout << "the list is := \n";
    for (node*  cur  = head; cur  != 0; cur = cur -> next)
    {
        cout << cur -> data << " ";
    }
    cout << "\n";
    cout << "\n";
}

int main() {
    createlist(20);
    createlist(30);
    display();
    head = reverse(head);
    display();
    return 0;
}