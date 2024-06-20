#include <iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
}
int main()
{

    int arr1[] = {1, 32, 4, 6, 7, 10};
    int arr2[] = {
        4,
        5,
        7,
        8,
        10,
        11,
    };
    intersection(arr1, arr2, 6);
}