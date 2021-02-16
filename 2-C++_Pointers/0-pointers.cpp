#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    For a type T , T∗ is the type ‘‘ pointer to T .’’ That is , a variable of type T∗ can
    hold the address of an object of type T
    */
    char c = 'a';
    char *p = &c; // p holds the address of c; & is the address-of operator

    /*
    The fundamental operation on a pointer is dereferencing , that is , referring to the
    object pointed to by the pointer .
    */
    char c2 = *p; // c2 == ’a’; * is the dereference operator

    /*
    The literal nullptr represents the null pointer , that is , a pointer that does not point
    to an object . It can be assigned to any pointer type , but not to other built - in types :
    */
    int *pi = nullptr;
    double *pd = nullptr;
    //int i = nullptr; // error : i is not a pointer
    int i = NULL; // NULL in C works differently!

    //  !Don’t use NULL in C++ ! ************************

    return 0;
}
