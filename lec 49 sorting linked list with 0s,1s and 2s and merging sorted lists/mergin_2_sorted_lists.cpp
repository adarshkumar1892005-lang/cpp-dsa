#include <iostream>
using namespace std;

// problem : https://bit.ly/3rfFdfV

int main() {
    
    return 0;
}

#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

/*
Node<int>* solve(Node<int>* first, Node<int>* second)
{   Node<int>* curr = first;
    Node<int>* next1 = first->next;
    
    Node<int>* curr2 = second;

    while(next1 != nullptr && curr2 != nullptr)
    {
        if(curr2->data >= curr->data && curr2->data <= next1->data)
        {
            Node<int>* next2 = curr2->next;
            curr->next = curr2;
            curr2->next = next1;
            curr = curr2;
            curr2 = next2;
            if(next2 != nullptr)
            {
                next2 = next2->next;
            }
        }
        else 
        {
            curr = next1;
            next1 = next1->next;
        }
    }
    if(curr2 != nullptr)
    {
        curr->next = curr2;
    }
    return first;
    
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first == nullptr) return second;
    if(second == nullptr) return first;

    if(first->data <= second->data)
    {
        return solve(first,second);
    }
    else return solve(second,first);
}

*/