// C++ program to understand new operator

#include <iostream>

using namespace std;

int main()
{
    int *ptr;

    ptr = new int;

    cout << *ptr << endl;

    ptr = new int(100);

    cout << *ptr << endl;

    ptr = new int(999999999);

    cout << *ptr << endl;

    ptr = new int(9999999999);

    cout << *ptr << endl;

    ptr = new (nothrow) int(9000000000);

    cout << *ptr << endl;

    delete ptr;

    return 0;
}
