/******************************************************************************************
 * static keyword
 * *********************
 * Static data members of a class are also known as "class variables", because there is only one unique value for all the objects (instance) of that same class. Their content is not different from one object of this class to another.
 * **************************************************************************************/

#include <iostream>
using namespace std;

class CDummy
{
public:
    static int n;
    CDummy() { n++; };
    ~CDummy() { n--; };
};

int CDummy::n = 0;

int main()
{
    CDummy a;
    CDummy b[5];
    CDummy *c = new CDummy;
    cout << a.n << endl;
    delete c;
    cout << CDummy::n << endl;
    return 0;
}