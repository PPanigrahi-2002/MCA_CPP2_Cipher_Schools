#include <bits/stdc++.h>
using namespace std;
int greatestnumber(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minimumvalue(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    // int n;
    // cin >> n;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << greatestnumber(arr, 5) << endl;
    cout << minimumvalue(arr, 5);
}