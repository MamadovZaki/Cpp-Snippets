/**************************************************************************************************
 * Exceptions
 * ***********
 * Exceptions provide a way to react to exceptional circumstances (like runtime errors) in our program by transferring control to special functions called handlers.
 * ************************************************************************************************/
#include <iostream>
using namespace std;

void exceptions_demo()
{
    try
    {
        // code here
    }
    //catch any exception thrown with any int parameter
    catch (int param)
    {
        cout << "int exception";
    }
    //catch any exception thrown with any char parameter
    catch (char param)
    {
        cout << "char exception";
    }
    // (...) that handler will catch any exception no matter what
    catch (...)
    {
        /* In this case the last handler would catch any exception thrown with any parameter that is neither an int nor a char */
        cout << "default exception";
    }
}

int main()
{
    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. " << endl;
        cout << "Exception Num. " << e << endl;
    }
    return 0;
}