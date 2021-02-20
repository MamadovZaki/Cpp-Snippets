/******************************************************************************************
 * Namespaces: using 
 * ******************
 * The keyword using can also be used as a directive to introduce an entire namespace:
 * **************************************************************************************/

#include <iostream>
using namespace std;

namespace first
{
    int x = 5;
    int y = 10;
}
namespace second
{
    double x = 5.5515;
    double y = 10.5515;
}

int main(int argc, char const *argv[])
{
    using namespace first;
    cout << "starting here, first domain variables" << endl;
    cout << "namespace first x = " << x << endl;
    cout << "namespace first y = " << y << endl;

    cout << endl;

    //! you can't do: using namespace second -- error
    cout << "starting here, second domain variables" << endl;
    cout << "namespace second x = " << second::x << endl;
    cout << "namespace second y = " << second::y << endl;

    cout << endl;

    namespace new_first = first; // OK
    cout << "Namespace aliases, now we have new name for first domain" << endl;
    cout << "namespace new_first x = " << x << endl;
    cout << "namespace new_first y = " << y << endl;
    return 0;
}
