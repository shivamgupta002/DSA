#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *left = NULL;
    node *right = NULL;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter data : ";
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting on left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting on right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{
    node *root = NULL;
    // Creating a tree
    root = buildTree(root);
}