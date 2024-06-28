#include <iostream>
using namespace std;
int sumofarray(int arr[], int size)
{
    int sum = 0;
    if (size == 0)
        return 0;
    if (size == 1)
        return arr[0];
    return arr[0] + sumofarray(arr + 1, size - 1);
    // int remainingpart = sumarray(arr+1,size -1);
    // int sum = arr[0]+ remaingpart;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sumofarray(arr, 5);
}