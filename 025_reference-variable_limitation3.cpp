// C++ program to understand reference variable aka call by reference

#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int &y  = num;
    y = 100;

    cout << "num = " << num << endl;
    cout << "y   = " << y   << endl;

    cout << "&num  = " << &num  << endl;
    cout << "&y    = " << &y    << endl;

    return 0;
}
