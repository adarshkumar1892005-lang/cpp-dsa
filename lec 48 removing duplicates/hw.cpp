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

void insertNode(Node* &head, Node* &tail, int d)
{
    Node* curr = new Node(d);
    if(tail == nullptr) 
    {
        tail = curr;
        head = curr;
        curr->next = tail;
        return;
    }


    curr->next = tail->next;
    tail->next = curr;
    tail = curr;
    return;
}

void printNode(Node* head)
{
    //empty list
    if(head == nullptr) 
    {
        cout << "List is empty\n";
        return;
    }

    Node* curr = head;
    do{
        cout << curr->data << " ";
        curr = curr->next;
    }
    while(curr != head);
    cout << endl;
}

int getLenofList(Node* head)
{
    if(head == nullptr) return 1;
    int cnt = 1;
    Node* temp = head;
    while(temp ->next != head)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void getTwoList(Node* head, Node* tail)
{
    //empty list
    if(head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }

    if(head->next == head)
    {
        cout << "There is only one node! ";
        printNode(head);
        return;
    }

    Node* first = head;
    Node* second = head;
    int n = getLenofList(head);
    for(int i=0 ; i < (n-1)/2 ; i++)
    {
        second = second->next;
    }
    Node* temp = second;
    second = second->next;
    temp->next = first;
    tail->next = second;

    cout << "First half of list is :- \n";
    printNode(first);
    cout << endl;
    cout << "Second half of list is :-\n";
    printNode(second);   

}

int main() {
    
    Node* head = new Node(1);
    head->next = head;
    Node* tail = head;
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  
    insertNode(head,tail,2);  

    getTwoList(head,tail);

    
    
    return 0;
}