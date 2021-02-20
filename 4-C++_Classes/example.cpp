/****************************************************************************
* Simple program to illustrate constructors, destructors, operator overloading 
****************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;

class CVectors
{
private:
    int *x{}, *y{};

public:
    CVectors();
    CVectors(int, int);
    CVectors *operator+(CVectors &);
    ~CVectors();
    int get_x();
    int get_y();
};

CVectors::CVectors()
{
    x = new int{}; // intialized to 0
    y = new int{}; // intialized to 0
}

CVectors::CVectors(int a, int b)
{
    x = new int{a}; // initialized to a, using this notation is alter. to the commented code below
    y = new int{b}; // initialized to b, using this notation is alter. to the commented code below
    //*x = a;
    //*y = b;
}

CVectors::~CVectors()
{
    delete x;
    delete y;
}

CVectors *CVectors::operator+(CVectors &param)
{
    CVectors result;
    *result.x = *x + *param.x;
    *result.y = *y + *param.y;
    CVectors *resultptr = new CVectors;
    memcpy(resultptr->x, result.x, sizeof(int));
    memcpy(resultptr->y, result.y, sizeof(int));
    return resultptr;
}

int CVectors::get_x()
{
    return *x;
}

int CVectors::get_y()
{
    return *y;
}

int main(int argc, char *argv[])
{
    CVectors v1;
    cout << "v1 = (" << v1.get_x() << ", " << v1.get_y() << ")" << endl;
    CVectors v2(1, 2);
    cout << "v2 = (" << v2.get_x() << ", " << v2.get_y() << ")" << endl;
    CVectors vx(0, 2);
    cout << "vx = (" << vx.get_x() << ", " << vx.get_y() << ")" << endl;
    CVectors res;
    cout << "res = (" << res.get_x() << ", " << res.get_y() << ")" << endl;
    CVectors *s{&res};
    cout << "s = (" << s->get_x() << ", " << s->get_y() << ")" << endl;
    s = vx + v2;
    res = *s;
    cout << "resulting vector, res = (" << res.get_x() << ", " << res.get_y() << ")" << endl;

    return 0;
}
