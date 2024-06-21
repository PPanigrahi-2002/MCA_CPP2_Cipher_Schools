// set properties
// 1-> unique elements - no two elements can be equal
// 2->  immutable -> we can add or remove elements from a set , but we can not change the value of existing elements
// 3->  sorted order-> by default order will be ascending
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> set1 = {1, 2, 4, 4};
    // desending

    set<int, greater<int>> set2 = {8, 45, 3, 4, 5};
    for (int i : set2)
    {
        cout << i << " " << endl;
    }
    set1.insert(20); // for insert
    set1.erase(4);   // for erase any elements
    set1.clear();
    for (int i : set1)
    {
        cout << i << " " << endl;
    }
}