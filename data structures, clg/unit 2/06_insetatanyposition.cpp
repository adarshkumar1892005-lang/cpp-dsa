#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = nullptr;

int count = 0;
void countnodes()
{
    for (node *cur = head; cur != nullptr; cur = cur->next)
    {
        count++;
    }
}

void insertatanyposition(int value, int position)
{
    node* newnode = new node{value, nullptr};

    if (position == 0)
    {
        newnode -> next = head;
        
        head = newnode;
        return ;
    }
    
    if(head == nullptr) { head = newnode; return; }

    node* temp = head;
    int i =1;
    while (i < position && temp != nullptr)
    {
        temp = temp -> next;
        i++;
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
    
}

void printlinkedlist()
{
    for (node* cur  = head; cur  != nullptr; cur = cur -> next)
    {
        cout << cur -> data << " " ;
    }
    
}

int main()
{
    node *n1 = new node{1, nullptr};
    node *n2 = new node{2, nullptr};
    node *n3 = new node{3, nullptr};
    head = n1;
    n1->next = n2;
    n2->next = n3;

    countnodes();
    int position;
    int value;
    cout << "at which position you want to insert: ";
    cin >> position;
    if (position > count )
    {
        cout << "invalid position" << endl;
        cout << " last position is " << count  << endl;
    }
    else
    {
        cout << "enter the value u want to insert: ";
        cin >> value;
        insertatanyposition(value, position);

    }
    printlinkedlist();

    return 0;
}