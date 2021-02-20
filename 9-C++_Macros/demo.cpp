// standard macro names
#include <iostream>
using namespace std;

/*******************************************************************************************
 * This would replace any occurrence of getmax followed by two arguments by the replacement expression, but also replacing each argument by its identifier, exactly as you would expect if it was a function:
 * *****************************************************************************************/
#define getmax(a, b) (a > b ? a : b)

void test_getmax()
{
    int x = 5;
    int y;
    y = getmax(x, 2);
    cout << y << endl;
    cout << getmax(7, x) << endl;
}

int main()
{
    cout << "testing get max : " << endl;
    test_getmax();
    cout << endl;

    cout << "testing define udef : " << endl;
#define TABLE_SIZE 100
    int table1[TABLE_SIZE];
    cout << sizeof(table1) / 4 << endl; // prints array length
#undef TABLE_SIZE
#define TABLE_SIZE 200
    int table2[TABLE_SIZE];
    cout << sizeof(table2) / 4 << endl; // prints array length
    cout << endl;

    cout << "This is the line number " << __LINE__;
    cout << " of file " << __FILE__ << ".\n";
    cout << "Its compilation began " << __DATE__;
    cout << " at " << __TIME__ << ".\n";
    cout << "The compiler gives a __cplusplus value of ";
    cout << __cplusplus;
    cout << endl;
    return 0;
}