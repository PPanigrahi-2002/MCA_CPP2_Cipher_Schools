#include <iostream>
using namespace std;
class Base
{
public:
  int x;

protected:
  int y;

private:
  int z;
};
class c1 : public Base
{
  // x is public
  // y is   protected
  // z is not accessible
};
class c2 : protected Base
{
  // x is protectet
  // y is protected
  // z is not accessible
};
class c3 : private Base
{
  // x is private
  // y is private
  // z is not accessible
};