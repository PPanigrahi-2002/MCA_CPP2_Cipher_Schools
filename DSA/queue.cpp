#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue()
    {
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int value)
    {
        if (rear = size - 1)
        {
            cout << "Queue overflow" << endl;
        }
        rear++;
        arr[rear] = value;
        if (front = -1)
            front++;
    }
    void pop()
    {

        if (front == -1 || front > rear)
        {
            cout << "No element in queue" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front != -1)
        {
            return arr[front];
        }
    }
};
int main()
{
    Queue qu;
    qu.push(2);
}