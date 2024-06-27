#include <iostream>
using namespace std;
void spiralprint(int arr[][5], int row, int col)
{
    int toprow = 0;
    int bottomrow = row - 1;
    int leftcol = 0;
    int rightcol = col - 1;
    while (toprow <= bottomrow && leftcol <= rightcol)
    {
        // print top row
        for (int i = leftcol; i <= rightcol; i++)
        {
            cout << arr[toprow][i] << " ";
        }
        toprow++;
    }
    // print right col
    for (int i = toprow; i <= bottomrow; i++)
    {
        cout << arr[bottomrow][i] << " ";
    }
    bottomrow--;
    // print bottom row
    for (int i = rightcol; i >= leftcol; i--)
    {
        cout << arr[bottomrow][i] << " ";
    }
    bottomrow--;
    // print left col
    for (int i = bottomrow; i >= toprow; i--)
    {
        cout << arr[i][leftcol] << " ";
    }
    leftcol++;
}