/*************************************
 * String Literals 
 * **********************************/
/****************************************************************************************
 * A string literal is a character sequence enclosed within double quotes :
    "this is a string "

 * A string literal contains one more character than it appears to have ; it is
terminated by the null character , '\0' , with the value 0

 * In C and in older C ++ code , you could assign a string literal to a non - const char∗ but in C++11 standatd, you can't .. see => demo()

 * If we want a string that we are guaranteed to be able to modify , we must place the
characters in a non - const array :

 * A string literal is statically allocated so that it is safe to return one from a function . See => error_message()
 * **************************************************************************************/

#include <iostream>
using namespace std;

void demo()
{
    char p[] = "Zeno";   // p is an array of 5 char
    p[0] = 'R';          // OK
    sizeof("Bohr") == 5; // true
    //char ∗ p = "Plato"; // error in C++ .. OK in C
    //char p[4] = 'e';    // error : assignment to const
}

const char *error_message(int i)
{
    // ...
    return "range error"; //OK
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
