#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtIndex(Node *&head, Node *&tail, int d, int index)
{
    if (index == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    int cnt = 1;
    Node *temp = head;
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

    Node *insertionNode = new Node(d);
    insertionNode->next = temp->next;
    temp->next = insertionNode;
}

bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == 0)
        {
            visited[temp] = 1;
            temp = temp->next;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
        return NULL;

    else
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && slow != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
                fast = fast->next;

            slow = slow->next;
            if (fast == slow)
                return slow;
        }
        return NULL;
    }
}

Node* getStartingNode(Node* head)
{
    if(head == NULL) return NULL;
    Node *intersection = floydDetectLoop(head);

    //No loop
    if(intersection == NULL) 
    {
        cout << "No starting node list is not having a loop\n";
        return NULL;
    }
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* &head)
{
    if(head == NULL) return;

    Node* startingpoint = getStartingNode(head);

    if(startingpoint == NULL)
    {
         cout << "No Loop present.\n";
        return;
    }

    Node* temp = startingpoint;
    while(temp->next != startingpoint)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    cout << "Loop is succesfully removed\n";
    return;

}


void printNode(Node *head)
{
    if (head == NULL)
        cout << "List is empty\n";
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    InsertAtTail(tail, 2);
    InsertAtTail(tail, 3);
    InsertAtTail(tail, 4);
    InsertAtTail(tail, 5);
    InsertAtTail(tail, 6);
    tail->next = head->next;

    // if (floydDetectLoop(head)!=NULL)
    //     cout << "Loop is present\n";
    // else
    //     cout << "Loop is not present\n";

    // Node* startofloop = getStartingNode(head);
    // cout << "Loop starts at " << startofloop->data << endl;

    removeLoop(head);
    printNode(head);
    return 0;
}