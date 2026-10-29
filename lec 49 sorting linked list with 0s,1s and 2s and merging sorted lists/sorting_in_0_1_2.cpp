#include <iostream>
using namespace std;
// problem :  https://bit.ly/3s3fAOu
int main() {
    
    return 0;
}

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

// FIRST APPROACH
/*
Node* sortList(Node *head){
    int countzero = 0;
    int countone = 0;
    int counttwo = 0;
    Node* temp = head;
    while(temp != nullptr)
    {
        if(temp->data == 0) countzero++;
        else if(temp->data == 1) countone++;
        else if(temp->data == 2) counttwo++;
        temp = temp->next;
    }
    temp = head;
    while(temp != nullptr)
    {
        if(countzero != 0)
        {
            temp->data = 0;
            countzero--;
        }
        else if(countone != 0)
        {
            temp ->data =1;
            countone--;
        }
        else if(counttwo != 0)
        {
            temp ->data = 2;
            counttwo--;
        }
        temp = temp->next;
    }
    return head;
}

*/

// SECOND APPROACH
/*
Node* sortList(Node *head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    
    Node* temp = head;
    //making 0,1 and 2 nodes
    while(temp != nullptr)
    {
        if(temp->data == 0)
        {
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if(temp->data == 1)
        {
            oneTail->next = temp;
            oneTail = temp;
        }
        else if(temp->data == 2)
        {
            twoTail->next = temp;
            twoTail = temp;
        }
        temp  = temp->next;
    }
    
    //  merging 0s,1s and 2s
    if(oneHead->next != nullptr)
    {
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    twoTail->next = nullptr;
    
    // setup head
    head =zeroHead->next;
    
    // delete nodes 0s,1s and 2s
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    
    
    return head;
}
*/