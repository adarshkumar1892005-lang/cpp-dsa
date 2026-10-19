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

void InsertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtIndex(Node* &head, Node* &tail, int d, int index)
{
    if (index == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    int cnt = 1;
    Node* temp = head;
    while (cnt < index - 1 && temp != NULL)
    {
        temp = temp->next;
        cnt++;
    }

    // Check for out-of-bounds index
    if (temp == NULL)
    {
        cout << "Index out of bounds!\n";
        return;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    
    Node* insertionNode = new Node(d);
    insertionNode->next = temp->next;
    temp->next = insertionNode;
}

Node* reverseInKgroup(Node *head , int k)
{
    if(head == NULL || head->next == NULL) return head;
    int cnt = 0;
    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;

    while(cnt < k && curr!= NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        cnt++;
    }
    if(forward != NULL)
    {
        head->next = reverseInKgroup(forward,k);
    }

    return prev;
}

void printNode(Node *head)
{
    if(head == NULL) cout << "List is empty\n";

    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp  = temp->next;
    } cout << endl;
}

int main() {
    Node *n1 = new Node(1);
    Node *head =n1;
    Node *tail =n1;
    InsertAtTail(tail,2);
    InsertAtTail(tail,3);
    InsertAtTail(tail,4);
    InsertAtTail(tail,5);

    printNode(head);
    head = reverseInKgroup(head,4);
    printNode(head);
    cout << head->data <<endl;
    
    return 0;
}