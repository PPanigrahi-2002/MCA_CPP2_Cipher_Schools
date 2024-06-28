#include <iostream>
using namespace std;
int factorial(int n)
{
    // base class
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    cout << factorial(5);
}