/*************************************************************************************
 * Enums
 * *******
 * Enumerations create new data types to contain something different that is not limited to the values fundamental data types may take.
 * ************************************************************************************/
#include <iostream>
using namespace std;

//we could create a new type of variable called color to store colors with the following declaration:
enum colors_t
{
    black,
    blue,
    green,
    cyan,
    red,
    purple,
    yellow,
    white
};

int main(int argc, char const *argv[])
{
    colors_t mycolor;
    mycolor = blue;
    //color_t hiscolor = mycolor + 1;   // error
    colors_t hiscolor = static_cast<colors_t>(mycolor + 1); //OK

    cout << mycolor << endl;     // prints 1 -- according to its position
    cout << mycolor + 1 << endl; //prints 2
    cout << hiscolor << endl;    // prints 2

    //We can explicitly specify an integer value for any of the constant values that our enumerated type can take.
    enum months_t
    {
        january = 1,
        february,
        march,
        april,
        may,
        june,
        july,
        august,
        september,
        october,
        november,
        december
    } y2k;

    y2k = january;
    cout << y2k << endl; //prints 1

    return 0;
}
