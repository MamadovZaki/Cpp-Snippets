#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a_size{10};
    int v1[a_size];
    int v2[a_size];

    // inserting elements to an array v1
    for (size_t i = 0; i < a_size; i++)
    {
        v1[i] = i * 10;
    }

    // copy the elements to v2
    for (auto i = 0; i < a_size; i++)
    {
        v2[i] = v1[i];
    }

    // print v2
    // using range for-loop
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}
