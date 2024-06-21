#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> set1 = {1, 1, 2, 2, 3, 3, 3};
    for (int i : set1)
    {
        cout << i << " ";
    }
    return 0;
}