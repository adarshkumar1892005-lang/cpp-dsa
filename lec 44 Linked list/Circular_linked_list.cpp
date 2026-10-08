#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val= this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "The memory is free for data "<< val << endl;
    }
};

void printNode(Node* &tail)
{
    if(tail == NULL) return;
    if(tail->next == NULL)
    {
        cout << tail->data;
        return;
    }
    Node* temp = tail->next;
    while(temp != tail)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    cout<< tail->data << endl;
}

int getLen(Node *tail)
{
    Node * temp = tail;
    int cnt = 0;
    do
    {
        temp = temp->next;
        cnt++;
    } while (tail!= temp);
    return cnt;
}

void InsertNode(Node* &tail, int d, int i)
{
    Node* temp = new Node(d);
    if(tail == NULL)
    {
         tail = temp;
         temp->next = temp;
         tail == NULL;
         return;
    }

    Node* curr = tail;
    if(i==1)
    {
        temp->next = tail->next;
        tail->next = temp;
        return;
    }

    int cnt =1;
    while(cnt < i)
    {
        curr = curr->next;
        cnt++;
    }
    temp->next = curr->next;
    curr->next = temp;

    if(curr == tail)
    {
        tail = temp;
    }
}

void deleteAtIndex(Node* &tail, int i)
{
    int n = getLen(tail);
    if(i < 1 || i+1 > n)
    {
        cout << "invalid indexing\n";
        return;
    }

    if(i==1 && tail->next == tail)
    {
        tail->next = NULL;
        delete tail;
        return;
    }

    Node* prev = NULL;
    Node* curr = tail;
    int cnt =1;
    while(cnt <= i)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    if(curr == tail)
    {
        tail = prev;
    }
    prev ->next = curr->next;
    curr->next = NULL;
    delete curr;

}

int main() {
    
    Node* tail = NULL;
    InsertNode(tail,0,1);
    printNode(tail);
    InsertNode(tail,2,2);
    printNode(tail);
    InsertNode(tail,4,3);
    printNode(tail);
    InsertNode(tail,6,4);
    printNode(tail);

    InsertNode(tail,1,2);
    printNode(tail);
    InsertNode(tail,3,4);
    printNode(tail);
    InsertNode(tail,5,6);
    printNode(tail);
    InsertNode(tail,7,8);
    printNode(tail);
    
    deleteAtIndex(tail,1);
    printNode(tail);
    deleteAtIndex(tail,6);
    printNode(tail);
    deleteAtIndex(tail,3);
    printNode(tail);

    deleteAtIndex(tail,5);
    printNode(tail);
      

    cout << getLen(tail) << endl;
    return 0;
}