#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[6] = {1, 23, 4, 5, 5, 67};

    reverse(arr, 6);
    printarr(arr, 6);
}