#include <iostream>
using namespace std;
int sumofarray(int arr[][3], int col, int row)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}
int main()
{
    int arr[4][3] = {1, 2, 3, 4, 4, 5, 56, 6, 6, 6, 4, 7};
    cout << sumofarray(arr, 4, 3);
}