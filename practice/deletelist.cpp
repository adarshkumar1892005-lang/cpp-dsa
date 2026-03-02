#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = 0;

void creatlist(int value)
{
    node *newnode = new node;
    newnode->data = value;
    newnode->next = 0;
    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void display()
{
    cout << "the list is :- ";
    for (node* cur  = head; cur  != 0; cur = cur -> next)
    {
        cout << cur -> data << " ";
    }
    cout << "\n";
    cout << "\n";
    
}



node* deleteat(node* head, int pos)
{
    int cnt = 0;
    for (node* cur  = head; cur  != 0; cur = cur -> next )
    {
        cnt ++;
    }
    
    if (head == 0 || pos > cnt || pos <= 0)
    {
        cout << "invalid operation \n";
        return head;
    }
    if (pos == 1)
    {
        node *temp = head;
        head = head -> next;
        delete temp;
        return head;
    }
    node* temp = head;
    node *tempnext = head;
    int i = 1;
    for (int i = 1; i < pos -1 ; i++)
    {
        temp = temp ->next;
    }
    tempnext = temp -> next;
    temp -> next = tempnext -> next;
    delete tempnext;
    return head;  
    
}

int main()
{
    creatlist(20);
    creatlist(80);
    creatlist(70);
    creatlist(40);
    display();
    head = deleteat(head , 1);
    display();

    return 0;
}