// C++ program to understand reference variable aka call by reference

#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;
    int num2 = 20;
    int &y   = num1;
    int &y   = num2;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "y   = " << y   << endl;

    cout << "&num1  = " << &num1  << endl;
    cout << "&num2  = " << &num2  << endl;
    cout << "&y    = " << &y    << endl;

    return 0;
}
