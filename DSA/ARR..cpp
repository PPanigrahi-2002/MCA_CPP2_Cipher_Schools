#include <iostream>
using namespace std;
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int size;
    cin >> size;
    int arr[size];
    cout << "Enter the 5 numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // for (int item : arr)
    //  {
    //     cout << item << " ";
    //  }
    printarr(arr, size);
}