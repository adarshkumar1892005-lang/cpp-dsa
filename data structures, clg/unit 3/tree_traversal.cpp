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
    cout << "enter value(-1 for null) : ";
    cin >> x;
    if (x == -1) return 0;
    newnode -> data = x;

    cout << "enter left child of " << x << endl;
    newnode -> left = create();
    
    cout << "enter right child of " << x << endl;
    newnode -> right = create();

    return newnode;
}

void pre_traversal(node* root)
{
    if(root == 0) return ;
    cout << root -> data << " ";
    pre_traversal(root -> left);
    pre_traversal(root -> right);

    return;
}

void in_traversal(node* root)
{
    if(root == 0) return ;
    in_traversal(root -> left);
    cout << root -> data << " ";
    in_traversal(root -> right);

    return;
}

void post_traversal(node* root)
{
    if(root == 0) return ;
    post_traversal(root -> left);
    post_traversal(root -> right);
    cout << root -> data << " ";

    return;
}

int main() {
    node* root ;
    root = create();
    cout << "\n pre-order traversal is :- \n ";
    pre_traversal(root) ;
    
    cout << "\n in-order traversal is :- \n ";
    in_traversal(root) ;

    cout << "\n post-order traversal is :- \n ";
    post_traversal(root) ;
    return 0;
}