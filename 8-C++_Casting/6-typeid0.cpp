/************************************************************************************************
 * typeid
 * *******
 * typeid allows to check the type of an expression:
 * typeid (expression)
 * **********************************************************************************************/
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    int *a, b;
    a = 0;
    b = 0;

    if (typeid(a) != typeid(b))
    {
        cout << "a and b are different types" << endl;
        cout << "a is " << typeid(a).name() << endl; // Pi => int *
        cout << "b is " << typeid(b).name() << endl; // i => int
    }

    char c = 'C';
    cout << "c is " << typeid(c).name() << endl; // c => char

    return 0;
}