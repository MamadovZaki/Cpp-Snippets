/************************************************************************************
 * References
 * **********
 * Like a pointer, a reference is an alias for an object, is usually implemented to hold a machine address of an object, and does not impose performance overhead compared to pointers, but it differs from a pointer in that:
    -> You access a reference with exactly the same syntax as the name of an object.
    -> A reference always refers to the object to which it was initialized.
    -> There is no ‘‘null reference,’’ and we may assume that a reference refers to an object. 
 * 
 * It is important to denote that references are not objects (pointers are objects), references are just a notation. See => references_demo1()
 * 
 * when a pointer is set to be equal to a reference, the pointer points to whatever the reference is referring to. See => references_demo2()
 * **********************************************************************************/
#include <iostream>
using namespace std;

void references_demo1()
{
    int var = 1;
    int &r{var}; // r and var now refer to the same int
    int x = r;   // x becomes 1

    r = 2; // var becomes 2
}

void references_demo2()
{
    int var = 0;
    int &rr{var};
    ++rr;          // var is incremented to 1
    int *pp = &rr; // pp points to var
}

void modify_array(int &a, int size) // pass by reference
{
    int *ptr = &a; // ptr points to whatever a is referencing
    for (int i = 0; i < size; i++)
    {
        ptr[i] += 10;
    }
}

int main(int argc, char const *argv[])
{
    int size = 5;
    int x[size] = {0, 1, 2, 3, 4};
    modify_array(x[0], 5);

    cout << "modified array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << x[i] << "\t";
    }
    cout << endl;
    return 0;
}
