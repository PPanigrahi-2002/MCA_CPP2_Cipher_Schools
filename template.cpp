#include <iostream>
using namespace std;
template <class T1, class T2>
class Number
{
private:
    T1 a;
    T2 b;

public:
    Number(T1 a1, T2 a2)
    {
        a = a1;
        b = a2;
    }
    T2 addnumber()
    {
        return a + b;
    }
};
int main()
{
    Number<int, float> n1(4, 7.3);
    cout << n1.addnumber();
}