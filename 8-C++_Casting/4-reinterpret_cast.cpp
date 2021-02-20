/************************************************************************************************
 * reinterpret_cast
 * ************
 * reinterpret_cast converts any pointer type to any other pointer type, even of unrelated classes. The operation result is a simple binary copy of the value from one pointer to the other. All pointer conversions are allowed: neither the content pointed nor the pointer type itself is checked.
 * ***
 * It can also cast pointers to or from integer types. The format in which this integer value represents a pointer is platform-specific. The only guarantee is that a pointer cast to an integer type large enough to fully contain it, is granted to be able to be cast back to a valid pointer.
 * **********************************************************************************************/
#include <iostream>
#include <exception>
using namespace std;

int main()
{
    class A
    {
    };
    class B
    {
    };

    A *a = new A;
    B *b = reinterpret_cast<B *>(a); //dereferencing it is unsafe.

    return 0;
}