/************************************************************************************************
 * dynamic_cast
 * ************
 * can be used only with pointers and references to objects.
 * dynamic_cast is always successful when we cast a class to one of its base classes
 * **********************************************************************************************/
#include <iostream>
using namespace std;

void dynamic_cast_demo()
{
    class CBase
    {
    };

    class CDerived : public CBase
    {
    };

    CBase b;
    CBase *ptr_b;
    CDerived d;
    CDerived *ptr_d;

    ptr_b = dynamic_cast<CBase *>(&d); // ok: derived-to-base
    //ptr_d = dynamic_cast<CDerived *>(&b); // !wrong: base-to-derived
}

int main()
{

    return 0;
}