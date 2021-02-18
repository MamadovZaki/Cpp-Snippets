/********************************************************************************
 * Abstract Class
 * **************
 * A class where at least one of its members lacks implementation, therefore we cannot create instances (objects) of it.
 * An abstract base classes we can leave a member function without implementation at all. This is done by appending =0 (equal to zero) to the function declaration.
 * ******************************************************************************/

#include <iostream>
using namespace std;

class CPolygon
{
protected:
    int width, height;

public:
    void set_values(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area(void) = 0; // <= area() is "a pure virtual function"
};

class CRectangle : public CPolygon
{
public:
    int area(void)
    {
        return (width * height);
    }
};

class CTriangle : public CPolygon
{
public:
    int area(void)
    {
        return (width * height / 2);
    }
};

int main()
{
    CRectangle rect;
    CTriangle trgl;
    CPolygon *ppoly1 = &rect;
    CPolygon *ppoly2 = &trgl;

    ppoly1->set_values(4, 5);
    ppoly2->set_values(4, 5);

    cout << ppoly1->area() << endl;
    cout << ppoly2->area() << endl;
    return 0;
}