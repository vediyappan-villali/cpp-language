#include <iostream>

using namespace std;

namespace one
{
    int num = 10;
}

namespace two
{
    int num = 20;
}

using namespace one;
using namespace two;

int main()
{
    cout << "num = " << num << endl;
    // cout << "num = " << one :: num << endl;
    // cout << "num = " << two :: num << endl;
    return 0;
}
