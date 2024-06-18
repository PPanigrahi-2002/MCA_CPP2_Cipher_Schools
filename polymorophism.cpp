// poly- many morph - forms -> polymorphism
// compile time and run time polymorphism
#include <iostream>
using namespace std;
class count
{
private:
    int value;

public:
    count()
    {
        value = 5;
    }
    void operator++()
    {
        value += 10;
    }
    void display()
    {
        cout << "Count : " << value << endl;
    }
};
int main()
{
    count c1;
    c1.display();
    ++c1;
    c1.display();
}