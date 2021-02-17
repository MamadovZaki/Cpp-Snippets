/******************************************************************************************
 * friend function
 * ***************
 * If we want to declare an external function as friend of a class, thus allowing this function to have access to the private and protected members of this class, we do it by declaring a prototype of this external function within the class, and preceding it with the keyword friend
 * **************************************************************************************/

#include <iostream>
using namespace std;

class CRectangle
{
    int width, height;

public:
    void set_values(int, int);
    int area() { return (width * height); }
    friend CRectangle duplicate(CRectangle);
};

void CRectangle::set_values(int a, int b)
{
    width = a;
    height = b;
}

CRectangle duplicate(CRectangle rectparam) // it doesn't need namespace resolution (::)
{
    CRectangle rectres;
    rectres.width = rectparam.width * 2;
    rectres.height = rectparam.height * 2;
    return (rectres);
}

int main()
{
    CRectangle rect, rectb;
    rect.set_values(2, 3);
    rectb = duplicate(rect);
    cout << rectb.area();
    return 0;
}