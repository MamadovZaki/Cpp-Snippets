// writing on a text file
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ofstream myfile("10-C++_Files/example.txt");

    if (myfile.is_open())
    {
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else
        cout << "Unable to open file";
    return 0;
}