#include <iostream>
using namespace std;
void triplesum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (target == arr[i] + arr[j] + arr[k])
                {
                    cout << "the tripal pair is " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}
int main()
{
    int arr[] = {1, 4, 6, 7, 8, 3, 2, 9};
    triplesum(arr, 8, 10);
}