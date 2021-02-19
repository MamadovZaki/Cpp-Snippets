/************************************************************************************
 *  Non-type template parameters
 * **************************
 * templates can also have regular typed parameters, similar to those found in functions.
 * ***********************************************************************************/

#include <iostream>
using namespace std;

template <class T, int LENGTH>
class mysequence
{
    T memoryblock[LENGTH];

public:
    void add_member(int, T);
    T get_member(int);
};

template <class T, int LENGTH>
void mysequence<T, LENGTH>::add_member(int index, T value)
{
    if (index >= LENGTH)
    {
        // throw an error if index > size of the block
        throw "Out of range!";
    }

    else
    {
        memoryblock[index] = value;
    }
}

template <class T, int LENGTH>
T mysequence<T, LENGTH>::get_member(int index)
{
    if (index >= LENGTH)
    {
        // throw an error if index > size of the block
        throw "Out of range!";
    }

    return memoryblock[index];
}

int main(int argc, char const *argv[])
{
    mysequence<int, 5> list;
    list.add_member(0, 1);
    list.add_member(1, 2);
    list.add_member(2, 3);
    list.add_member(3, 4);
    list.add_member(4, 5);

    // this will fail b/c index > size
    try
    {
        list.add_member(5, 10);
    }
    // don't use "string e" -- error
    catch (const char *e)
    {
        cout << "Error."
             << "\t";
        cout << e << '\n';
    }

    cout << "test: " << list.get_member(4) << endl;
    return 0;
}
