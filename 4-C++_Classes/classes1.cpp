#include <iostream>
using namespace std;

class Date
{
    int d, m, y;

public:
    // ...
    Date(int, int, int); // day, month, year
    Date(int, int);      // day, month, today’s year
    Date(int);           // day, today’s month and year
    Date();              // default Date: today
    Date(const char *);  // date in string representation
};

int main(int argc, char const *argv[])
{
    // different notations for instantiating a class

    Date today{4}; // 4, today.m, today.y
    Date tdy(4);

    Date july4{"July 4, 1983"};
    Date jul4("July 4, 1983");

    Date guy{5, 11}; // 5, November, today.y
    Date now;        // default initialized as today
    Date start{};    // default initialized as today

    Date d2 = Date{15};
    Date d3 = 15;
    Date d4 = {30, 11};

    return 0;
}
