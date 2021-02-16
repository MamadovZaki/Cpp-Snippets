/*************************************
 * Switch-Case 
 * **********************************/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Do you want to proceed? (y/n)\n";
    char answer = 0;
    cin >> answer;

    switch (answer)
    {
    case 'y':
        return true;
        break;

    case 'n':
        return false;
        break;

    default:
        cout << "I will take that for a no\n";
        return false;
        break;
    }

    if (answer)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "Bye" << endl;
    }

    return 0;
}
