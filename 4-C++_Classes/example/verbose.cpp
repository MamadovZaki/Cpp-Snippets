#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

class CVectors
{
private:
    int *x{}, *y{};

public:
    CVectors();
    CVectors(int, int);
    CVectors *operator+(CVectors &);
    ~CVectors();
    int get_x();
    int get_y();
};

string get_string_address(CVectors *ptrr)
{
    ostringstream get_address;
    get_address << ptrr;
    string address = get_address.str();

    return address;
}

CVectors *ptrv1;
CVectors *ptrv2;
CVectors *ptrvx;
CVectors *ptrres;
CVectors *ptrs;
CVectors *ptrresult;
CVectors *ptrparam;

CVectors::CVectors()
{
    if (this != nullptr)
    {
        x = new int{}; // intialized to 0
        y = new int{}; // intialized to 0
        cout << "----------------------------- Construction -------------------------" << endl;
        cout << endl;

        cout << "constructor fired, x = " << *x << " and y = " << *y << endl;
        CVectors *ptr = this;
        cout << "Object instantiated at " << ptr << endl;
        string ptr_address = get_string_address(ptr);
        string instance_address = get_string_address(ptrv1);
        if (ptr_address == instance_address)
        {
            cout << "v1 instantiated" << endl;
        }

        cout << endl;
        cout << "-----------------------------------------------------------------------" << endl;
        cout << endl;
    }
}

CVectors::CVectors(int a, int b)
{
    x = new int{a}; // initialized to a, using this notation is alter. to the commented code below
    y = new int{b}; // initialized to b, using this notation is alter. to the commented code below
    //*x = a;
    //*y = b;
    cout << "----------------------------- Construction -------------------------" << endl;
    cout << endl;

    cout << "constructor fired, x = " << *x << " and y = " << *y << endl;
    cout << "Object instantiated at " << this << endl;

    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << endl;
}

CVectors::~CVectors()
{
    cout << "----------------------------- Destruction -------------------------" << endl;
    cout << endl;

    cout << "destructor fired and is now deleting: " << *x << ", " << *y << endl;
    cout << "deleting object at " << this << endl;
    CVectors *ptr = this;
    string ptr_address = get_string_address(ptr);
    string v1_address = get_string_address(ptrv1);
    string vx_address = get_string_address(ptrvx);
    string v2_address = get_string_address(ptrv2);
    string res_address = get_string_address(ptrres);
    string s_address = get_string_address(ptrs);
    string param_address = get_string_address(ptrparam);
    string result_address = get_string_address(ptrresult);

    if (ptr_address == v1_address)
    {
        cout << "v1 deleted" << endl;
    }
    if (ptr_address == vx_address)
    {
        cout << "vx deleted" << endl;
    }
    if (ptr_address == v2_address)
    {
        cout << "v2 deleted" << endl;
    }
    if (ptr_address == res_address)
    {
        cout << "res deleted" << endl;
    }
    else if (ptr_address == s_address)
    {
        cout << "s deleted" << endl;
    }
    else if (ptr_address == param_address)
    {
        cout << "param deleted" << endl;
    }
    else if (ptr_address == result_address)
    {
        cout << "result deleted" << endl;
    }

    delete x;
    delete y;

    cout << "deleted original x, y. garbage values are: " << *x << ", " << *y << endl;
    cout << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << endl;
}

CVectors *CVectors::operator+(CVectors &param)
{
    cout << "----------------------------- operator+() -------------------------" << endl;
    cout << endl;

    ptrparam = &param;
    cout << "CVectors param was set at " << &param << endl;
    CVectors result;
    ptrresult = &result;
    cout << "CVectors result was set at " << ptrresult << endl;
    *result.x = *x + *param.x;
    *result.y = *y + *param.y;
    cout << "result: x= " << result.get_x() << " y= " << result.get_y() << endl; //yes

    // memory allocation
    cout << "-------------Memory Allocation detected-------------" << endl;
    CVectors *resultptr = new CVectors;
    cout << "allocated heap memory at: " << resultptr << endl;
    memcpy(resultptr->x, result.x, sizeof(int));
    memcpy(resultptr->y, result.y, sizeof(int));
    cout
        << "copied: " << *resultptr->x << ", " << *resultptr->y << endl;
    cout << endl;
    cout << "----------------------------- end of operator+() ----------------------------------"
         << endl;
    cout << endl
         << "** End of function operator+() .. Destroying instances: param, result ** " << endl
         << endl;
    cout << "address of resultptr: " << &resultptr << endl;
    return resultptr;
}

int CVectors::get_x()
{
    return *x;
}

int CVectors::get_y()
{
    return *y;
}

int main(int argc, char *argv[])
{
    cout << "----------------------------- main() -------------------------" << endl;
    cout << endl;

    CVectors v1;
    ptrv1 = &v1;
    cout << "v1 = (" << v1.get_x() << ", " << v1.get_y() << ")" << endl;
    CVectors v2(1, 2);
    ptrv2 = &v2;
    cout << "v2 = (" << v2.get_x() << ", " << v2.get_y() << ")" << endl;
    CVectors vx(0, 2);
    ptrvx = &vx;
    cout << "vx = (" << vx.get_x() << ", " << vx.get_y() << ")" << endl;
    CVectors res;
    cout << "res = (" << res.get_x() << ", " << res.get_y() << ")" << endl;
    CVectors *s{&res};
    ptrres = &res;
    cout << "s = (" << s->get_x() << ", " << s->get_y() << ")" << endl;
    s = vx + v2;
    ptrs = s;
    res = *s;
    cout << "resulting vector, res = (" << res.get_x() << ", " << res.get_y() << ")" << endl;
    cout << endl;
    cout << "-------------------------- end of main() --------------------------------------" << endl;
    cout << endl
         << "** End of main() .. Destroying instances: v1, vx, v2, s **" << endl
         << endl;

    return 0;
}