/*************************************
 * Boolean Data Type 
 * **********************************/

#include <iostream>
using namespace std;

bool gt(int a, int b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int b{2};          // <= variable initialization with {} is legal
    bool b1{a == b};   // 0: false
    bool b2 = (a > b); // 1: true
    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;

    if (gt(a, b))
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is less than b" << endl;
    }

    return 0;
}
