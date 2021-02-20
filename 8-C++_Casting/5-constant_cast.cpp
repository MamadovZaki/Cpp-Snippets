/************************************************************************************************
 * const_cast
 * ***********
 * This type of casting manipulates the constness of an object, either to be set or to be removed.
 * **********************************************************************************************/

#include <iostream>
using namespace std;

void print(char *str)
{
    cout << str << endl;
}

int main()
{
    const char *c = "sample text";
    print(const_cast<char *>(c)); //converted from const char* to char*
    return 0;
}