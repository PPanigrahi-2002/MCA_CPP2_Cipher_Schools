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
void insertattail(Node *&head, int value)
{
    Node *n = new Node(value);
    Node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void insertathead(Node *&head, int value)
{
    Node *n = new Node(value);

    Node *temp = n;
    temp->next = head;
    head = n;
}
bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
            return true;
    }
    return false;
}
void deleteathead(Node *&head)
{
    Node *todelet = head;
    head = head->next;
    delete todelet;
}
void deletion(Node *&head, int key)
{
    Node *temp = head;
    if (head == NULL)
        return;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
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
    // cout << search(head, 11) << endl;

    deletion(head, 11);
    display(head);
}