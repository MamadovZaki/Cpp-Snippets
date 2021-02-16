#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int tries = 1;
    while (tries < 4)
    {
        cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        cin >> answer;
        // write question
        // read answer
        switch (answer)
        {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "Sorry, I don't understand that.\n";
            ++tries; // increment
        }
    }
    cout << "I'll take that for a no.\n";
    return false;
    return 0;
}
