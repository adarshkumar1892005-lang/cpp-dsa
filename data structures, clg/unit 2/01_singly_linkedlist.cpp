#include <iostream>
using namespace std;

struct singly_linkedlist
{
    int data;
    singly_linkedlist *next;
};

using node = singly_linkedlist;

node *head = 0;
node *temp = 0;

int main()
{

        int x;
        cout << "enter values(0 for end): ";
        while (true)
        {
            cin >> x;
            if (x == 0) break;
            else {

                node* newnode = new node{x,nullptr};
                if (head == 0)
                {
                    head = newnode;
                    temp = newnode;
                }
                else
                {
                    temp -> next = newnode;
                    temp = newnode;
                }
            }
        }
        for (node*  cur = head; cur != nullptr; cur = cur -> next)
        {
            cout << cur -> data << " ";
        }

    return 0;
}