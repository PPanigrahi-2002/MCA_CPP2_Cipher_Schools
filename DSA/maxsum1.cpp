#include <bits/stdc++.h>
using namespace std;
int maxsum(int arr[][4], int col, int row)
{
    int max = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        return sum;
    }
}
int rowsum(int arr[][4], int row, int col)
{
    int sum = 0;
    int max = INT_MIN;
    int rowindex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            max = sum;
            rowindex = row;
        }
    }
    cout << "max sum is: " << max << endl;
    return rowindex;
}
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 54, 6, 7, 8, 9, 10, 12, 12, 13, 15, 16, 16};
    cout << maxsum(arr, 4, 4) << endl;
    cout << rowsum(arr, 4, 4);
}