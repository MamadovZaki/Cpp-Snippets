/*************************************
 * Scope 
 * **********************************/

#include <iostream>
using namespace std;

int x = 100; // <= Global variable -- accessible by all functions

int main(int argc, char const *argv[])
{
    int x = 1; // hide global x
    cout << "Global x = " << ::x << endl;
    cout << "Local x = " << x << endl;
    cout << "---- Assigning a value to a global variable from within a function -----" << endl;
    ::x = 2; // assign to global x
    cout << "Global x = " << ::x << endl;
    cout << "Local x = " << x << endl;
    // ...
    return 0;
}
