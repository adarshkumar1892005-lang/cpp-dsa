#include <iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* create()
{
    int x;
    node* newnode = new node;
    cout << "enter data (-1 for null):  ";
    cin >> x;
    if (x == -1) return 0;
       
    newnode -> data = x;
    cout << "enter left child of " << x  << " : ";
    newnode -> left = create();
    cout << "enter right child of " << x << ": ";
    newnode -> right = create();
    return newnode;
}

int main() {
    node* root ;
    root = create();

    return 0;
}