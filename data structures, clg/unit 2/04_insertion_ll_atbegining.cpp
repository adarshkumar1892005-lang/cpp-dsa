#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
node* head = nullptr;

void insertatbeginning( int value)
{
    node* newnode = new node;
    newnode -> data = value;
    newnode -> next = head;
    head = newnode; 
}

void printarray( )
{
    for (node*  cur  = head; cur  != nullptr; cur = cur -> next)
    {
        cout << cur -> data << " ";
    }
    
}


int main() {
    node* n1 = new node{10,nullptr}; 
    node* n2 = new node{20,nullptr}; 
    node* n3 = new node{30,nullptr}; 

    head = n1;
    n1 -> next = n2;
    n2 -> next = n3;

    insertatbeginning(32);
    printarray();
    
    return 0;
}