/********************************************************************************
 * Pointers to Base Class
 * **********************
 * One of the key features of derived classes is that a pointer to a derived class is type-compatible with a pointer to its base class. Polymorphism is the art of taking advantage of this simple but powerful and versatile feature, that brings Object Oriented Methodologies to its full potential.
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
};

class CRectangle : public CPolygon
{
public:
    int area()
    {
        return (width * height);
    }
};

class CTriangle : public CPolygon
{
public:
    int area()
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
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    return 0;
}