#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertToTail(Node* &tail, int d)
{
    Node* curr = new Node(d);
    // empty list
    if(tail == NULL) 
    {
        tail = curr;
    }
    else
    {
        tail->next = curr;
        tail = curr;
    }
}

void removeDuplicate(Node* &head)
{
    Node* curr = head;
    while (curr->next != NULL)
    {
        if(curr->data == curr->next->data)
        {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next = NULL;
            delete temp;
        }
        else curr = curr->next;
    }
    cout << "Duplicates removed !" << endl;
}

void printNode(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}


int main() {
    Node* head = new Node(0);
    Node* tail = head;
    insertToTail(tail,1);
    insertToTail(tail,2);
    insertToTail(tail,2);
    insertToTail(tail,2);
    insertToTail(tail,3);
    insertToTail(tail,3);
    insertToTail(tail,4);
    insertToTail(tail,4);

    removeDuplicate(head);
    printNode(head);
    
    return 0;
}