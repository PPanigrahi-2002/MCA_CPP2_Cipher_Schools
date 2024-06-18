// inheritance
//  it allows us to create a new class(derieved/child) from an exsisting class(base/ parent)
// the child class inherits the feature from parent class and can be additional features of its own.
#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "eating" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "bow bow" << endl;
    }
};
int main()
{
    Animal a;
    a.eat();
    Dog d;
    d.bark();
    d.eat();
}