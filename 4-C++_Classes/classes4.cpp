/******************************************************************************************
 * Overloading operators
 * *********************
 * C++ incorporates the option to use standard operators to perform operations with classes in addition to with fundamental types.
 * **************************************************************************************/

#include <iostream>
using namespace std;

class CVector
{
public:
    int x, y;
    CVector(){};
    CVector(int, int);
    CVector operator+(CVector); // defines the ability to add 2 CVectors
};

CVector::CVector(int a, int b)
{
    x = a;
    y = b;
}

CVector CVector::operator+(CVector param)
{
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return (temp);
}

int main()
{
    CVector a(3, 1);
    CVector b(1, 2);
    CVector c;
    c = a + b;
    cout << c.x << "," << c.y;
    cout << endl;
    return 0;
}