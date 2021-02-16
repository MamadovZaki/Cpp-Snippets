#include <iostream>  // <= standard library
using namespace std; // <= see namespaces: 6-C++_Namespaces/

double square(double); // <= function prototype

int main(int argc, char *argv[])
{
    // Hello World
    cout << "Hello World" << endl; //endl == '\n'

    // call function square and output result
    cout << square(5) << endl;
}

double square(double x) // <= function Definition/Implementation
{
    return x * x;
}