#include <iostream>
using namespace std;
void insertionsort(int arr[], int size)
{
    for (int i = 0; i < size; i++)

    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 57, 8, 8, 5, 4, 3};
    insertionsort(arr, 7);
}
