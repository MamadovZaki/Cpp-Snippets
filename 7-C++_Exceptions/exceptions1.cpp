/***************************************************************************************************
 * Exception specifications
 * ************************
 * When declaring a function we can limit the exception type it might directly or indirectly throw by appending a throw suffix to the function declaration
 * *************************************************************************************************/

#include <iostream>
using namespace std;

// The only exception that this function might throw is an exception of type int.
float myfunction_v1(char param) throw(int);

// If this throw specifier is left empty with no type, this means the function is not allowed to throw exceptions.
int myfunction_v2(int param) throw();

// All exceptions allowed
int myfunction_v3(int param);

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
