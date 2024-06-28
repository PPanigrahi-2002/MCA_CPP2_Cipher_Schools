// heap
/* -> each variable uses space on computer's memory to store
 */
#include <iostream>
using namespace std;
int main()
{
    // how to define heap
    int n;
    cin >> n;
    int *ptr2 = new int;
    int *ptr = new int[n];
    // 2d array syntax in heap
    int **arr = new int *[n];

    delete[] ptr2;
}