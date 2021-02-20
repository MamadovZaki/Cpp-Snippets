/************************************************************************************************
 * dynamic_cast
 * ************
 * When a class is polymorphic, dynamic_cast performs a special checking during runtime to ensure that the expression yields a valid complete object of the requested class:
 * **********************************************************************************************/
#include <iostream>
#include <exception>
using namespace std;

class CBase
{
    virtual void dummy() {}
};

class CDerived : public CBase
{
    int a;
};

int main()
{
    try
    {
        CBase *pba = new CDerived;
        CBase *pbb = new CBase;
        CDerived *pd;
        pd = dynamic_cast<CDerived *>(pba); // this will work, pd != null
        pd = dynamic_cast<CDerived *>(pbb); // this won't, pd = null

        // safety check: when cast fails, nullptr is produced
        if (pd == nullptr)
            cout << "Null pointer on first type-cast" << endl;
        if (pd == nullptr)
            cout << "Null pointer on second type-cast" << endl;
    }
    catch (exception &e)
    {
        cout << "Exception: " << e.what();
    }
    return 0;
}