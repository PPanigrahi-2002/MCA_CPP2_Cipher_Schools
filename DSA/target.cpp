#include <iostream>
using namespace std;
bool keyispresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (target == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 10, 11, 12};
    cout << keyispresent(arr, 9, 3, 4);
}