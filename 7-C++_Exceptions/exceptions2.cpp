/***************************************************************************************************
 * Standard Exception
 * ************************
 * The C++ Standard library provides a base class specifically designed to declare objects to be thrown as exceptions.
 * *************************************************************************************************/

#include <iostream>
#include <exception> // <--- here
using namespace std;

class CustomizedException : public exception
{
    virtual const char *what() const throw()
    {
        return "My exception happened";
    }
} my_exception;

int main(int argc, char const *argv[])
{
    try
    {
        throw my_exception;
    }
    catch (const exception &e)
    {
        cerr << e.what() << '\n';
    }

    return 0;
}
