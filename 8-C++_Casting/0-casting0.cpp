/*****************************************************************************************
 * Type Casting
 * ************
 * Converting an expression of a given type into another type is known as type-casting.
 * ***************************************************************************************/
#include <iostream>
using namespace std;

class CDummy
{
    float i, j;
};

class CAddition
{
    int x, y;

public:
    CAddition(int a, int b)
    {
        x = a;
        y = b;
    }

    int result()
    {
        return x + y;
    }
};

int main()
{
    CDummy d;
    CAddition *padd;

    padd = (CAddition *)&d; //C-Style: bad code or runtime error !don't do it
    cout << padd->result();
    /*********************************************************************************************
     * In order to control these types of conversions between classes, we have four specific casting operators:
     * dynamic_cast <new_type> (expression)
     * reinterpret_cast <new_type> (expression)
     * static_cast <new_type> (expression)
     * const_cast <new_type> (expression)
     * **********************************************************************************************/
    return 0;
}