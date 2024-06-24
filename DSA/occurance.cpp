#include <iostream>
using namespace std;
int occurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int main()
{
    int arr[] = {3, 4, 3, 5, 6, 7};
    cout << occurance(arr, 6, 7);
}