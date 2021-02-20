/********************************************************************************************
 * Namespaces: using
 * ******************
 * The keyword using is used to introduce a name from a namespace into the current declarative region.
 * *******************************************************************************************/

#include <iostream>
using namespace std;

namespace first
{
    int x = 5;
    int y = 10;
}
namespace second
{
    double x = 5.5515;
    double y = 10.5515;
}

int main(int argc, char const *argv[])
{
    using first::x;
    using second::y;

    cout << "x in first domain: " << x << endl;
    cout << "y in second domain: " << y << endl;

    cout << "y in first domain: " << first::y << endl;
    cout << "x in second domain: " << second::x << endl;

    return 0;
}
