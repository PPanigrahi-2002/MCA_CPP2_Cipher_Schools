#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void insertedathead(Node *&head, int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

Node *middlepoint(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void print(Node *head)
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
    insertedathead(head, 10);
    insertedathead(head, 101);
    insertedathead(head, 11);
    insertedathead(head, 22);
    insertedathead(head, 60);
    print(head);
    Node *mid = middlepoint(head);
    cout << mid->data;
    /*Node *mid = middlepoint(head);
    if (mid != NULL)
        cout << mid->data << endl;
    else
        cout << "List is empty" << endl;
    return 0;*/
}
