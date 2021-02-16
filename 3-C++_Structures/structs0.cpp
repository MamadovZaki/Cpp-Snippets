/***************************************************************************************
 * Struct
 * *******
 * A struct is an aggregate of elements of arbitrary types.
 * 
 **************************************************************************************/
#include <iostream>
using namespace std;

void demo()
{
    /**************************************************************************************
 * Unlike C. The name of a type becomes available for use immediately after it has been encountered and not just after the complete declaration has been seen.
 * **************************************************************************************/
    struct Link
    {
        Link *link0; //OK
        Link *link2; //OK
    };
}

// define a an address struct
struct Address
{
    const char *name;
    int number;
    const char *street;
    const char *town;
    char state[2];
    const char *zip;
};

Address initialize_address()
{
    Address jd = {
        "M Zaki",
        61,
        "South St",
        "Austin",
        {'T', 'X'},
        "0708x8"};

    return jd;
}

void print_address1(Address *p)
{
    cout << p->name << endl //  −> ( struct pointer dereference)
         << p->number << endl
         << p->street << endl
         << p->town << endl
         << p->state[0] << p->state[1]
         << " " << p->zip << endl;
}

void print_address2(Address &ref)
{
    cout << ref.name << endl // . 'dot' (struct member access operator)
         << ref.number << endl
         << ref.street << endl
         << ref.town << endl
         << ref.state[0] << ref.state[1]
         << " " << ref.zip << endl;
}

int main(int argc, char const *argv[])
{
    Address Sam;
    initialize_address();
    print_address1(&Sam);
    cout << endl;
    print_address2(Sam);
    return 0;
}
