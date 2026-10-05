#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this-> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtHead(Node* &head , int d)
{
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtIndex(Node* &head,Node* &tail, int d , int index)
{
    int cnt =1;
    
    if(index == 1)
    {
        InsertAtHead(head,d);
        return;
    }

    Node* temp = head;
    while(cnt < index-1)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL)
    {
        InsertAtTail(tail,d);
        return;
    }
    Node* insertionNode = new Node(d);
    insertionNode -> next = temp -> next;
    temp -> next = insertionNode;
}

void deleteAtIndex(Node* &head, int i)
{
    if(i == 1)
    {
        Node* temp = head;
        head  = head-> next;
        temp ->next = NULL;
        delete temp;
    }

    else 
    {
        Node* prev= NULL;
        Node* curr = head;
        int cnt =1;
        while(cnt < i)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

//Hw
void deletebyvalue(Node* &head, int val)
{
    Node* prev = NULL;
    Node* curr = head;
    while(curr -> data != val && curr->next != NULL)
    {
        prev = curr;
        curr = curr ->next;
    }
    if(curr->data != val) cout << "Value is not found in linked list\n";
    else 
    {
        if(curr == head)
        {
            head = head->next;
            curr->next = NULL;
            delete curr;
        }
        else 
        {
            prev -> next = curr ->next;
            curr -> next = NULL;
            delete curr;
        }
    }
}

void printNode(Node* &head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next ;
    }
    cout << endl;
}

int main() {
    
    Node* n1 = new Node(5);
    Node* head = n1;
    Node* tail = n1;
    printNode(head);
    
    cout << "insertion at tail\n";
    InsertAtTail(tail,4);
    InsertAtTail(tail,3);
    InsertAtTail(tail,2);
    InsertAtTail(tail,1);
    printNode(head);

    InsertAtHead(head,6);
    InsertAtHead(head,7);
    InsertAtHead(head,8);
    InsertAtHead(head,9);
    printNode(head);

    InsertAtIndex(head,tail,10,1);
    InsertAtIndex(head,tail,0,11);
    printNode(head);

    deleteAtIndex(head,1);
    printNode(head);

    deletebyvalue(head,4);
    printNode(head);
    return 0;
}