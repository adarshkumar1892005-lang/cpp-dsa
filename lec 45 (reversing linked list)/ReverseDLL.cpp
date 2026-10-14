#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this -> prev = NULL;
        this ->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for data " << val << endl;
    }
};

int getLength(Node* head)
{

    if(head == NULL) return 0;
    Node* temp = head;
    int cnt =1;
    while(temp->next != NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void insertAtIndex(Node* &head, Node* &tail, int d, int i)
{
    Node* temp = new Node(d);
    
    //insertion on empty
    if(head == NULL || tail == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }

    //insertion at head
    if(i == 1)
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
        return;
    }

    if(i > getLength(head)+1 || i <=0 )
    {
        cout << "Insertion index :"<< i <<" not valid \n";
        return;
    }
    
    int cnt = 1;
    Node* curr = head;
    while(cnt < i-1)
    {
        curr = curr->next;
        cnt++;
    }

    if(curr == NULL)
    {
        cout << "wrong insertion index :" << i << " where tail is at :" << cnt << endl;
        return;
    }

    //insertion at tail
    if(curr->next == NULL)
    {
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
        return;
    }

    //insertion at mid
    temp->next = curr->next;
    curr->next->prev = temp ;
    curr->next = temp;
    temp->prev = curr;
}

void print(Node* head)
{
    if(head == NULL) cout << "List is empty\n";
    cout << endl;
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse1(Node* head)
{
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;
    Node* newhead;
    while(temp != NULL)
    {
        if(temp->next == NULL) newhead = temp;
        Node* temp2 = temp->next;
        temp->next = temp->prev;
        temp->prev = temp2;
        temp = temp-> prev;
    }
    return newhead;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    

    print(head);
    head = reverse1(head);
    print(head);

    return 0;
}