/************************************************************************************
 *  Intro to Templates 
 * *******************
 * Function/Class templates are special functions that can operate with generic types. This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.
 * ***********************************************************************************/
#include <iostream>
using namespace std;

template <class T>
class Mypair
{
private:
    T values[2];

public:
    Mypair(T, T);
    T getmax();
};

template <class T>
Mypair<T>::Mypair(T first, T second)
{
    values[0] = first;
    values[1] = second;
}

template <class T>
T Mypair<T>::getmax()
{
    T greatest;
    greatest = values[0] > values[1] ? values[0] : values[1];

    return greatest;
}

int main(int argc, char *argv[])
{
    Mypair<int> testmax(500, 200);
    int result;
    result = testmax.getmax();
    cout << "greatest number = " << result << endl;

    return 0;
}