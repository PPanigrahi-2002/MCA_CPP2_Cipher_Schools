#include <iostream>
using namespace std;
void alteranate(int arr[], int size)
{
    int start = 0;
    int end = start + 1;
    while (end < size)
    {
        swap(arr[start], arr[end]);
        start = start + 2;
        end = start + 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[6] = {1, 2, 4, 5, 6, 7};
    alteranate(arr, 6);
}