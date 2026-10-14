#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor (Iterative approach is safer to prevent stack overflow)
    ~Node()
    {
        int value = this->data;
        // Detach next to prevent recursive deletion issues
        this->next = NULL;
        cout << "memory is free for node with data " << value << endl;
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

void deleteAtIndex(Node* &head, int i)
{
    if (head == NULL) return;

    if (i == 1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else 
    {
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        
        while (cnt < i && curr != NULL)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr == NULL)
        {
            cout << "Index out of bounds for deletion!\n";
            return;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void deletebyvalue(Node* &head, int val)
{
    if (head == NULL)
    {
        cout << "List is empty!\n";
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    
    while (curr != NULL && curr->data != val)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) 
    {
        cout << "Value is not found in linked list\n";
    }
    else 
    {
        if (curr == head)
        {
            head = head->next;
        }
        else 
        {
            prev->next = curr->next;
        }
        curr->next = NULL;
        delete curr;
    }
}

void printNode(Node* &head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


Node* reverse1(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL)
    {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
    return head;
}


int main() {
    Node* n1 = new Node(1);
    Node* head = n1;
    Node* tail = n1;
    
    InsertAtTail(tail,2);
    InsertAtTail(tail,3);
    InsertAtTail(tail,4);
    InsertAtTail(tail,5);
    InsertAtTail(tail,6);

    head = reverse1(head);
    printNode(head);

    return 0;
}