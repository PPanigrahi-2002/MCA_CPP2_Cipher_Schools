#include <iostream>
#include <string>
using namespace std;
bool checkpalindrom(char arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    char arr[] = "naman";
    int size = sizeof(arr) / sizeof(arr[0]) - 1;
    cout << checkpalindrom(arr, size);
}