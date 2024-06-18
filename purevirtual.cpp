// if a function doesn't have any use in the base class but the function must be
// implemented by all its derived classes
#include <iostream>
using namespace std;
class A
{
public:
    virtual void display() = 0;
};
class B : public A
{
public:
    void display()
    {
    }
};
class C : public A
{
public:
    void dispaly()
    {
    }
};
int main()
{
    B b1;
    // C c1;
}