// lower bound
/*the lower bound algo find the first or smallest index in a sorted array where the value as that index
is greater than or equal to the given key
*/
#include <iostream>
using namespace std;
int lowerbound(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 5};
    cout << lowerbound(arr, 6, 3);
    return 0;
}