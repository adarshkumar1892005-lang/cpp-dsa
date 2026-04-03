#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val): data(val), left(nullptr),right(nullptr) {}

};


node* createTree()
{
    int x;
    cout << "enter the value(-1 for null): ";
    cin >> x;
    if(x == -1) return nullptr;
    
    node* newnode = new node(x);

    cout <<" enter left child of " << x << endl;
    newnode -> left =createTree();

    cout <<" enter right child of " << x << endl;
    newnode -> right = createTree();

    return newnode;
}


void treetoDLLutil(node* root,node* &head , node* &prev )
{
    if(!root) return;

    treetoDLLutil(root->left, head, prev);

    if(prev == nullptr)
    {
        head = root;
    }
    else
    {
        prev->right = root;
        root->left = prev;
    }

    prev = root;

    treetoDLLutil(root->right,head, prev);

}

node* TreetoDll( node* root)
{
    node* head = nullptr;
    node* prev = nullptr;
    treetoDLLutil(root, head ,prev);
    return head;
}

void printDLL(node* head)
{
    for (node* cur  = head; cur  != nullptr ; cur = cur -> right)
    {
        cout << cur-> data << "->";
    }
    cout << endl;
    
}



int main() {
    cout << "Create the Tree: \n";
    node* root = createTree();
    node* head = TreetoDll(root);
    printDLL(head);

    
    return 0;
}