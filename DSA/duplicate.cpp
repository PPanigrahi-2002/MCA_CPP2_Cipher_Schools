#include <iostream>
using namespace std;
void duplicate(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "the number  " << arr[i] << "  repeated " << count << " times " << endl;
    }
}
int main()
{
    int arr[5] = {};
    duplicate(arr, 5);
}