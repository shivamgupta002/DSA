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

int main()
{
    node *root = NULL;
    // Creating a tree
    root = buildTree(root);

    // level order Traversal
    levelOrderTraversal(root);
    /*
    output ->
    1
    3 5
    7 11 17
    */
}