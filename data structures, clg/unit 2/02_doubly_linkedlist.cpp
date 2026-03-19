#include <iostream>
using namespace std;

struct doublylinkedlist
{
    int data ;
    doublylinkedlist* next;
    doublylinkedlist* prev;
};
using node = doublylinkedlist;

node* head = nullptr;
node* tail = nullptr;

int main() {
    node* n1 = new node{10,nullptr,nullptr};
    node* n2 = new node{20,nullptr,nullptr};
    node* n3 = new node{30,nullptr,nullptr};
    
    head = n1;
    tail = n3;

    n1 -> next = n2;
    n2 -> next = n3;

        for (node*  cur  = head; cur  != nullptr; cur = cur -> next)
        {
            cout << cur -> data << " ";
        }
        
        
        return 0;
}