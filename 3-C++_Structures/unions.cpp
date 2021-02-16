/*************************************************************************************
 * Unions
 * *******
 * A union is a struct in which all members are allocated at the same address so that the union occupies only as much space as its largest member.
 * a union can hold a value for only one member at a time.
 * Unions allow one same portion of memory to be accessed as different data types
 * ************************************************************************************/
#include <iostream>
using namespace std;

void example()
{
    union Fudge
    {
        int i;
        int *p;
    };

    int i = 5;
    Fudge a;
    a.i = i;
    //  cout << *a.i << endl;   seg fault
}

// annonyms union
/*
If we declare a union without any name, the union will be anonymous and we will be able to access its members directly by their member names.
*/
struct
{
    char title[50];
    char author[50];
    union
    {
        float dollars;
        int yens;
    };
} book;

int main(int argc, char const *argv[])
{
    example();
    book.dollars = 5; //OK
    cout << book.dollars << endl;
    return 0;
}
