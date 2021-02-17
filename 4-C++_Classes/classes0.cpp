/*****************************************************************************************
 * Classes
 *********
 * A class is a user-defined type.
 * A class consists of a set of members. The most common kinds of members are data members and member functions.
 * Member functions can define the meaning of initialization (creation), copy, move, and
cleanup (destruction).
 * Members are accessed using . (dot) for objects and −> (arrow) for pointers.
 * Operators, such as + , ! , and [] , can be defined for a class.
 * A class is a namespace containing its members.
 * The public members provide the class’s interface and the private members provide imple-
mentation details.
 * A struct is a class where members are by default public .
 * ***************************************************************************************/

#include <iostream>
using namespace std;

class Rectangular
{
private:
    // sets initial values to zero (equivalent to: length = 0, .. etc)
    int length{}, width{}, side{};

public:
    // Class Interface: functions declared without definition/implementaion
    Rectangular(int);      // <= constructor
    Rectangular(int, int); // <= constructor
    int area();
};

Rectangular::Rectangular(int s)
{
    side = s;
}

Rectangular::Rectangular(int l, int w)
{
    length = l;
    width = w;
}

int Rectangular::area()
{
    if (side == 0)
        return length * width;

    return side * side;
}

int main(int argc, char *argv[])
{
    Rectangular square(5);
    Rectangular rectangular(2, 5);

    cout << "Area of square of length 5 = " << square.area() << endl;
    cout << "Area of rectangular of length 2, width 5 = " << rectangular.area() << endl;

    return 0;
}