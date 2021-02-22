/**********************************************************************************************
 * Working with files
 * ******************
 * C++ provides a header file called fstream , which is used for file I/O.
 * fstream header file contains the definitions of two data types: ifstream , which means input file stream, and ofstream , which means output file stream. 
 * 
 * File I/O is a five-step process:
    * Include the header file fstream in the program.
    * Declare file stream variables.
    * Associate the file stream variables with the input/output sources.
    * Use the file stream variables with >> , << , or other input/output functions.
    * Close the files. 
**********************************************************************************************/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inData;
    ofstream outData;

    // Opens a file that you created and contains data
    // !feel free to change the directory as you may
    inData.open("10-C++_Files/prog.dat");

    // opens a file that was already created or creates a file if it is not created
    // !feel free to change the directory as you may
    outData.open("10-C++_Files/prog.out");

    string something;
    string more;

    // prints to console/terminal
    cout
        << "Processing data .. " << endl;

    // captures data writting in "prog.dat" and stores them in "something"
    // To read a string containing blanks, you can use the function getline .
    // The reading is delimited by the newline character '\n' .
    getline(inData, something);
    getline(inData, more);

    // writes data stored in something to file "prog.out"
    outData << "inData.dat contains: \n"
            << something << endl
            << more << endl;

    // close files after processing
    inData.close();
    outData.close();

    return 0;
}
