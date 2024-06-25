// Bubble sort -> push the max to the last by adjacent swaps
#include <iostream>
using namespace std;
void bubblesort(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        int hasswapped = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                hasswapped = 1;
            }
        }

        if (hasswapped == 0)
            break;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 4, 6, 5, 3, 5};
    bubblesort(arr, 6);
}