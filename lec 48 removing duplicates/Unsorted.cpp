#include <unordered_map>
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
        this->next = nullptr;
    }
};

void insertToTail(Node* &tail, int d)
{
    Node* curr = new Node(d);
    // empty list
    if(tail == nullptr) 
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
    if(head == nullptr) 
    {
        cout << "List is empty \n";
        return;
    }

    unordered_map<int,bool> visited ;
    Node* curr = head;
    visited[curr->data] = true;
    while(curr->next != nullptr)
    {
        if(visited[curr->next->data] == true) 
        {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            temp->next = nullptr;
            delete temp;
        }
        else 
        {
            visited[curr->next->data] = true;
            curr = curr->next;
        }
    }
    cout << "duplicate data removed\n";
}

void printNode(Node* head)
{
    if(head == nullptr) cout << "List is empty\n";

    Node* temp = head;
    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    } cout << endl;
}

int main() {
    Node* head = new Node(0);
    Node* tail = head;
    insertToTail(tail,2);
    insertToTail(tail,4);
    insertToTail(tail,1);
    insertToTail(tail,3);
    insertToTail(tail,2);
    insertToTail(tail,2);
    insertToTail(tail,4);
    insertToTail(tail,3);

    removeDuplicate(head);

    printNode(head);
    
    return 0;
}