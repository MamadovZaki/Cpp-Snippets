/******************************************************************************************
 * Class Inheritance
 * *****************
 * Inheritance allows to create classes which are derived from other
classes, so that they automatically include some of its "parent's" members, plus its own.

 * Classes that are derived from others inherit all the accessible members of the base class. That means that if a base class includes a member A and we derive it to another class with another member called B, the derived class will contain both members A and B.

 * In principle, a derived class inherits every member of a base class except:
    * its constructor and its destructor
    * its operator=() members
    * its friends
    * private members
    
 * Although the constructors and destructors of the base class are not inherited themselves, its default constructor (i.e., its constructor with no parameters) and its destructor are always called when a new object of a derived class is created or destroyed.
 * **************************************************************************************/

#include <iostream>
using namespace std;

class CPolygon
{
protected: // <= accessible by derived classes only
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
    rect.set_values(4, 5);
    trgl.set_values(4, 5);
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    return 0;
}