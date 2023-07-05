// C++ program to understand class

#include <iostream>

using namespace std;

class A
{
    int   i;
    char  c;
    float f;
};

int main()
{
    A a1, a2;

    a1.i = 10;

    cout << "a1.i = " << a1.i << endl;

    a2.i = 20;

    cout << "a2.i = " << a2.i << endl;

    return 0;
}
