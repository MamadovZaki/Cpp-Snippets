/*************************************
 * Character Data Type 
 * **********************************/

#include <iostream>
using namespace std;

char uppercase(char c)
{
    // clever way to convert char to uppercase
    if ((c >= 'a') && (c <= 'z'))
        c += 'A' - 'a';
    return c;
}

int main(int argc, char const *argv[])
{
    /*******************************************************************************************
     * Each character has an integer value in the character set used by the implementation. For example, the value of 'b' is 98 in the ASCII character set. Here is a loop that outputs the the integer value of any character you care to input:
     ******************************************************************************************/
    cout << "Testing char -> int conversion" << endl;
    for (char c; cin >> c;) // cin << c : asking for input
    {
        cout << "the value of '" << c << "' is " << int{c} << '\n';
        if (c == '0')
            break;
    }

    cout << endl;

    /******************************************************************************************
     * This is a way of writing the ten digits to cout . The character literal '0' is converted to its integer value and i is added. The resulting int is then converted to a char and written to cout . Plain '0'+i is an int , so if I had left out the static_cast<char> , the output would have been something like 48 , 49 , and so on, rather than 0 , 1 , and so on.
     *****************************************************************************************/
    cout << "Writing digits from 1 to 9" << endl;
    for (int i = 0; i != 10; ++i)
        // <= statc_cast<char> is equivalent to (char) in C
        cout << static_cast<char>('0' + i) << " ";

    cout << endl
         << endl;

    cout << "DIY uppercase conversion" << endl;
    cout << uppercase('a') << ", " << uppercase('b') << ", .. etc" << endl;

    return 0;
}
