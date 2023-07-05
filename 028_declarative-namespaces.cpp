// C++ program to understand declarative namespaces

#include <iostream>

using namespace std;

namespace one
{
    int num1 = 10;
    int num2 = 20;
}

namespace two
{
    int num1 = 100;
    int num2 = 200;
}

using one :: num1;
using two :: num2;

int main()
{
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}
