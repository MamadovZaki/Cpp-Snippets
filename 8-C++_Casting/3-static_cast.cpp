/************************************************************************************************
 * static_cast
 * ************
 * static_cast can perform conversions between pointers to related classes, not only from the derived class to its base, but also from a base class to its derived. This ensures that at least the classes are compatible if the proper object is converted, but no safety check is performed during runtime to check if the object being converted is in fact a full object of the destination type. Therefore, it is up to the programmer to ensure that the conversion is safe. On the other side, the overhead of the type-safety checks of dynamic_cast is avoided.
 * **********************************************************************************************/
#include <iostream>
#include <exception>
using namespace std;

class CBase
{
};

class CDerived : public CBase
{
};

int main()
{
    try
    {
        CBase *a = new CBase;
        CDerived *b = static_cast<CDerived *>(a);

        //static_cast can also be used to perform any other non-pointer conversion that could also be performed implicitly
        double d = 3.14159265;
        int i = static_cast<int>(d);
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what();
    }
    return 0;
}