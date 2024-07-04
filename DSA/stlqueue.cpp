#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> qu;
    qu.push(10);
    qu.push(9);
    qu.pop();
    cout << qu.front();
}