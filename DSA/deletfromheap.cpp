/*1->first put the last node value in the root node
2->then decrease the size by 1
3-> then check the root nodes is greater then the child nodes
if not then swap with greater child
4-> use 2*i to go to the left child and 2*i-1 to go to the right child
*/
/*
Heapify
1-> in that nodes all n/2 -1 all are satisfy max heap
2-> so we would be check tha value from n/2 -1 to 1.
3-> check left and right value  if find then swift it.*/
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
    void deletfromheap()
    {
        if (size == 0)
            return;
        // replace first node with last
        arr[1] = arr[size];
        // remove last element
        size--;
        // take root to its correct position
        int i = 1;
        while (i < size)
        {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            int largest = i;
            if (leftindex < size && arr[i] < arr[leftindex])
            {
                // swap(arr[i], arr[leftindex]);
                // i = leftindex;
                largest = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex])
            {
                // swap(arr[i], arr[rightindex]);
                // i = rightindex;
                largest = rightindex;
            }
            if (largest != i)
            {
                swap(arr[i], arr[largest]);
                i = largest;
            }
            else
                return;
        }
    }
};
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
}
void heapsort(int arr[], int n)
{
    int size = n;
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, n, 1);
    }
}
int main()
{
    heap h;
    h.insert(10);
    h.insert(8);
    h.insert(7);
    h.insert(4);

    h.insert(5);
    h.insert(9);
    // h.print();
    h.deletfromheap();
    cout << endl;
    // h.print();
    int arr[8] = {-1, 1, 5, 6, 8, 9, 7, 3};
    int n = 3;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    // for (int i = 1; i <= n; i++)
    //{
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    heapsort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}