// Date 03 JULY 2024

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int key)
{
    Node *newNode = new Node(key);
    if (!head)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void reverseAtPos(Node *&head, int pos)
{
    if (pos <= 1 || !head || !head->next)
    {
        return;
    }

    Node *prev = nullptr;
    Node *curr = head;
    int count = 0;

    while (curr && count < pos)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    head->next = curr;
    head = prev;
}

Node *floydDetectLoop(Node *&head)
{
    if (!head || !head->next)
    {
        cout << "Loop nai mila " << endl;
        return head;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            cout << "Loop detected vroooo" << endl;
            return slow;
        }
    }

    return slow;

    cout << "No loop detected vrooo." << endl;
}
Node *getstartingNode(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *intersection = floydDetectLoop(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
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
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head->next->next->next->next = head->next;

    floydDetectLoop(head);
    getstartingNode(head);

    // print(head);

    return 0;
}