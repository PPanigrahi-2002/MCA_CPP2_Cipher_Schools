/*
recursion -> recursion happens when a function call itself directly or indirectly
eg func(int n)
{
func(n);
}
if the soluntion of a problem depends on a smaller problem of
same type, then we will use recursion.

*/
#include <iostream>
using namespace std;
void gohome(int src, int dest)
{
    if (src == dest)
        return;
    gohome(src++, dest);
}
void print(int n)
{
    // base case
    if (n == 0)
        return;
    cout << n << endl;
    // recursive relation
    print(n - 1);
}
int main()
{

    print(5);
}