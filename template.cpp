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
    T2 subnumber()
    {
        return a - b;
    }
    T2 multinumber()
    {
        return a * b;
    }
    T2 dividenumber()
    {
        return a / b;
    }
};
int main()
{
    Number<int, float> n1(4, 7.3);
    cout << n1.addnumber() << endl;
    cout << n1.subnumber() << endl;
    cout << n1.multinumber() << endl;
    cout << n1.dividenumber() << endl;
}