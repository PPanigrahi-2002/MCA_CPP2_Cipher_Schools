#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *sortedArrayToBST(int arr[], int s, int e)
{
    if (s > e)
        return NULL;

    int mid = (s + e) / 2;
    Node *root = new Node(arr[mid]);

    root->left = sortedArrayToBST(arr, s, mid - 1);
    root->right = sortedArrayToBST(arr, mid + 1, e);

    return root;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << sortedArrayToBST()
}