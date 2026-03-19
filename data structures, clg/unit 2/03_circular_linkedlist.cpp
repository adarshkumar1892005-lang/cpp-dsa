#include <iostream>
using namespace std;

struct circular_linkedlist
{
    int data;
    circular_linkedlist* next;
    circular_linkedlist* prev;
};

using node = circular_linkedlist;
node* head = nullptr;
 
int main() {
    node* n1 = new node{10,nullptr};
    node* n2 = new node{20,nullptr};
    node* n3 = new node{30,nullptr};
    
    n1 -> next = n2;
    n2 -> next = n3;
    n3 -> next = n1;

    for (node*  cur  = head; cur  != nullptr; cur = cur -> next)
    {
        cout << cur -> data << " ";
    }
    

    return 0;
}