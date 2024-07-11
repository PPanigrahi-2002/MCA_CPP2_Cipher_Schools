#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
int childsum(Node *root)
{
    if (root == NULL)
        return 0;
    return root->data + root->left + root->right;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(NULL);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
}