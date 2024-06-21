#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> unset = {5, 3, 9, 56, 6};
    unset.insert(20);
    for (int i : unset)
    {
        cout << i << " ";
    }
}