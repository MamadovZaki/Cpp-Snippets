#include <iostream>
#include <vector> // <= C++ standard library
using namespace std;

struct Point
{
    int x, y;
};

struct Points
{
    vector<Point> elements; // declare a vector of type 'Point' and call it 'elements'

    /* Points(Point p0), Points(Point p0, Point p1)
        2 constructors refer that a struct instance may take one argument or two 
    */
    Points(Point p0)
    {
        /*
        struct constructor -- takes the same name as the struct
        automaically invoked once a struct instance is instantiated        
        */
        elements.push_back(p0);
    }

    Points(Point p0, Point p1)
    {
        elements.push_back(p0);
        elements.push_back(p1);
    }
};

int main(int argc, char const *argv[])
{
    /* instantiating a struct */
    Point p1{}; // sets x, y = 0
    cout << "p1 = (" << p1.x << ", " << p1.y << ")" << endl;
    Point p2{1}; // sets x = 1, y =0
    cout << "p1 = (" << p2.x << ", " << p2.y << ")" << endl;
    Point p3{-2, -5};
    cout << "p1 = (" << p3.x << ", " << p3.y << ")" << endl;

    Points x1{p1, p2};
    Points x2{p3};
    Points x4{{10, 20}}; // {20, 10} is a Point type!

    return 0;
}
