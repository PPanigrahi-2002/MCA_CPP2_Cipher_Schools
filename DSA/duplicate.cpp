#include <iostream>
using namespace std;
void duplicate(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        cout << "the number  " << arr[i] << "  repeated " << count << " times " << endl;
    }
}
int main()
{
    int arr[5] = {};
    duplicate(arr, 5);
}