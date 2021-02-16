#include <iostream>
using namespace std;

void navigate_array_with_index(float *, int);
void navigate_array_with_pointer(float *, int);
void navigate_2Darray_with_index(int m[3][3]);
void navigate_2Darray_with_pointer(int *, int, int);

int a1[10]; // 10 ints in static storage

void f()
{
    /*    
    An array can be allocated statically , on the stack , and on the free store . 
    */
    int a2[20];           // 20 ints on the stack
    int *p = new int[40]; // 40 ints on the free store (heap memory)
    // ...
}

int main(int argc, char const *argv[])
{
    float v[3] = {1.99, 2.99, 3.99}; // an array of three floats: v[0], v[1], v[2]
    char *a[32];                     // an array of 32 pointers to char: a[0] .. a[31]

    cout << "testing array navigation via index" << endl;
    navigate_array_with_index(v, 3);
    cout << endl;

    cout << "testing array navigation via pointer" << endl;
    navigate_array_with_pointer(v, 3);
    cout << endl;

    cout << "testing 2D-array navigation via index" << endl;
    int M[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    navigate_2Darray_with_index(M); // <= M is a pointer => M == &M[0]
    cout << endl;
    cout << "testing 2D-array navigation via pointer" << endl;
    navigate_2Darray_with_pointer(&M[0][0], 3, 3);

    return 0;
}

void navigate_array_with_index(float *v, int size)
{
    // a function needs to know array size
    for (int i = 0; i < size; ++i)
        cout << "v[" << i << "]"
             << "= " << v[i] << " ";
}

void navigate_array_with_pointer(float *v, int size)
{
    while (size > 0)
    {
        cout << "v points to " << *v << endl;
        v++;
        size--;
    }
}

void navigate_2Darray_with_index(int M[3][3])
{
    for (int i = 0; i != 3; i++)
    {
        for (int j = 0; j != 3; j++)
            cout << M[i][j] << '\t';
        cout << '\n';
    }
}

void navigate_2Darray_with_pointer(int *m, int dim1, int dim2)
{
    for (int i = 0; i != dim1; i++)
    {
        for (int j = 0; j != dim2; j++)
            cout << m[i * dim2 + j] << '\t'; // obscure
        cout << '\n';
    }
}
