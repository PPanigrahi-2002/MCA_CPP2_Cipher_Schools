// Binary search
//  1-> sorted the array
// 2-> find mid postion of the array
// 3-> if arr[mid] == key then we find it
//  4-> if key > arr[mid]  => s= mid+1
// 5-> if key <  arr[mid] => e= mid-1;
#include <iostream>
using namespace std;
bool Binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return false;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9};
    cout << Binarysearch(arr, 6, 2);
}