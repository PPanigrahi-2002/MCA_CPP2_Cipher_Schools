#include <iostream>
using namespace std;
class Base
{
public:
    void print()
    {
        cout << "from Base" << endl;
    }
};
class derieved : public Base
{
public:
    void print()
    {
        cout << "from derieved" << endl;
    }
};
int main()
{

    //derieved d1;
    //d1.Base::print(); // here we access the method forefully
    derieved d1;
    Base *ptr = &d1;
    
}