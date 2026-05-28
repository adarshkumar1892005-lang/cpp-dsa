#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
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

int checkheight(node *root)
{
    if (root == nullptr)
        return 0;
    int lh = checkheight(root->left);
    if (lh == -1)
        return -1;

    int rh = checkheight(root->right);
    if (rh == -1)
        return -1;

    if (abs(lh - rh) > 1)
        return -1;

    return max(lh, rh) + 1;
}

bool isBalancedtree(node *root)
{
    return checkheight(root) != -1;
}

int main()
{
    node* root = createTree();
    if(isBalancedtree(root)) cout << " Balanced Tree \n";
    else cout << "unbalanced tree \n";
    return 0;
}