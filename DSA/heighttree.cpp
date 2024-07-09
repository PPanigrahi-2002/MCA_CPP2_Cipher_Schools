// create queue
// push root and NULL
// pop the front element and check if front ele is not null then then push the left and right ele of front till the q is not empty

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

int callheight(Node *root)
{
    if (root == NULL)
        return 0;
    return max(callheight(root->left), callheight(root->right)) + 1;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << callheight(root);
}