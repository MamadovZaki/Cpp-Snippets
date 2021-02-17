/******************************************************************************************
 * this keyword
 * *********************
 * The keyword 'this' represents a pointer to instance of the class.
 * **************************************************************************************/

#include <iostream>
using namespace std;

class CDummy
{
public:
    int is_it_me(CDummy &param);
};

int CDummy::is_it_me(CDummy &param)
{
    if (&param == this)
        return true;
    else
        return false;
}

int main()
{
    CDummy a;
    CDummy *b = &a;
    if (b->is_it_me(a))
        cout << "yes, &a is b";
    return 0;
}