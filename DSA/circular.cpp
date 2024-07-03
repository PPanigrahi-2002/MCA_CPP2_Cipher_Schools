#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
void insertathead(Node *&head, int value)
{
    Node *n = new Node(value);

    Node *temp = n;
    temp->next = head;
    head = n;
}
bool iscircular(Node *head)
{
    if (head == NULL)
        return true;
    Node *temp = head;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;

        if (temp == head)
            return true;
    }
    return false;
}
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    insertathead(head, 10);
    insertathead(head, 101);
    insertathead(head, 11);
    display(head);
    cout << iscircular(head);
}