#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

int launch_verbose(char *command)
{
    if (strcmp(command, "--verbose") == 0)
    {
        int s = system("./verbose");
        if (s != 0)
        {
            cout << "Failed to run verbose, make sure you are at the same directory" << endl;
        }
        else
        {
            cout << "       END     " << endl;
        }

        return 0;
    }
    else
    {
        cout << "Invalid" << endl;
        return 1;
    }
}