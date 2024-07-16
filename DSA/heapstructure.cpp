/*
Heap
heap is complete binary tree that comes with a heap order property
CBT-> every level is completely filled expcept the last level , in
which the nodes are added from left.
left child = 2*i
right child = 2*i+1
0th index-
left child = 2*i +1
right child = 2*i+2
parent = i/2

*/
#include <iostream>
using namespace std;
class heap
{
public:
    int arr[100];
    int size;
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    heap h;
    h.insert(5);
    h.insert(4);
    h.insert(3);
    h.insert(9);
    h.insert(1);
    h.print();
}