#include <iostream>
using namespace std;
bool pairsum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (target == arr[i] + arr[j])
            {

                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 4, 5, 10, 7};
    cout << pairsum(arr, 6, 65);
}