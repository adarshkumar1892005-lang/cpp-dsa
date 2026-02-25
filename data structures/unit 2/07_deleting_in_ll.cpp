#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = nullptr;

void createlist(int value)
{
    node *newnode = new node;
    if (head == nullptr)
    {
        head = newnode;
        newnode->data = value;
        newnode->next = nullptr;
    }
    else
    {
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->data = value;
        newnode->next = nullptr;
    }
}

void display()
{
    for (node *cur = head; cur != nullptr; cur = cur->next)
    {
        cout << cur->data << " ";
    }
    cout << endl;
}

void delete_at_begining()
{
    if (head == nullptr)
    {
        cout << " list is empty can't delete anything!!";
        return;
    }
    else
    {
        node *temp = head;
        head = head->next;
        delete temp;
        cout << "deleted first node." << endl;
    }
}

void deleting_at_end()
{
    if (head == nullptr)
    {
        cout << " list is empty!!";
    }
    else
    {
        node *temp = head;
        node *cur;
        while (temp->next != nullptr)
        {
            cur = temp;
            temp = temp->next;
        }
        if (temp == head)
        {
            head = nullptr;
        }
        else
        {
            cur->next = nullptr;
        }
        delete temp;
        cout << " last node deleted" << endl;
    }
}


void del_at_pos(int pos)
{
    int count;
    for (node *cur = head; cur != nullptr; cur = cur->next)
    {
        count++;
    }
    if (head == nullptr || pos > count || pos < 1)
    {
        cout << "linked list is already empty or invalid operation!!" << endl;
    }
    if (pos ==1)
    {
        node* temp = head;
        head = head -> next;
        delete temp;
    }
    
    else
    {
        int i = 1;
        node *temp = head;
        node *nexttemp;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        nexttemp = temp->next;
        temp->next = nexttemp->next;
        delete nexttemp;
    }
}
int main()
{
    int n;
    cout << "enter no. of terms in list: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cout << " enter value at position :" << i + 1 << " : ";
        cin >> value;
        createlist(value);
    }
    cout << "lists is " << endl;
    display();
    delete_at_begining();
    deleting_at_end();
    cout << "updated list is :";
    display();
    int pos;
    cout << "enter the position where u want to delete: " << endl;
    cin >> pos;
    del_at_pos(pos);
    cout << "updated list is :-" << endl;
    display();
    return 0;
}