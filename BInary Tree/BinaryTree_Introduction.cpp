#include <iostream>
#include <queue>
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
    cout << "Enter data : " <<endl;
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

// Also known as-> Breadth first search
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // purana level complete traverse ho gya

            cout << endl;
            if (!q.empty())
            {
                // queue still has some child
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

// InOrder Traversal

void inOrder(node *root)
{
    // L N R

    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// preOrder Traversal

void preOrder(node *root)
{
    // N L R

    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// PostOrder Traversal

void postOrder(node *root)
{
    // L R N

    // base case
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // Creating a tree
    root = buildTree(root);

    // level order Traversal
    levelOrderTraversal(root);

    // inOrder Traversal
    cout << endl;
    cout << "InOrder Traversal : ";
    inOrder(root);

    // preOrder Traversal
    cout << endl;
    cout << "PreOrder Traversal : ";
    preOrder(root);

    // // PostOrder Traversal
    cout << endl;
    cout << " PostOrder Traversal : ";
    postOrder(root);
}