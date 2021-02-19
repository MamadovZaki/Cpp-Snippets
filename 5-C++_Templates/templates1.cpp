/************************************************************************************
 *  Templates Specialization
 * **************************
 * If we want to define a different implementation for a template when a specific type is passed as template parameter, we can declare a specialization of that template.
 * ***********************************************************************************/

#include <iostream>
using namespace std;

// class template
template <class T>
class Mycontainer
{
private:
    T element;

public:
    Mycontainer(T arg)
    {
        element = arg;
    }

    T increment();
};

template <class T>
T Mycontainer<T>::increment()
{
    // !return element++ won't work!
    return ++element;
}

// class specialization
template <>
class Mycontainer<char>
{
private:
    char element;

public:
    Mycontainer(char charc)
    {
        element = charc;
    }

    //char increment();
    char uppercase();
};

// leave out template<> in this definition
char Mycontainer<char>::uppercase()
{
    if ((element >= 'a') && (element <= 'z'))
        element += 'A' - 'a';
    return element;
}

int main(int argc, char *argv[])
{
    Mycontainer<int> num(2);
    cout << "testing template with T type: " << num.increment() << endl;

    Mycontainer<char> charc('a');
    cout << "testing specialized template: " << charc.uppercase() << endl;
}