#include <iostream>
using namespace std;
int uniqueelement(int arr[], int size)
{
    int i = 0;
    for (int j = i + 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i;
}
int main()
{
    int arr[5] = {1, 1, 2, 2, 3};
    int k = uniqueelement(arr, 5);
    for (int i = 0; i <= k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}