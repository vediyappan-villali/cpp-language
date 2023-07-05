// C++ program to understand reference variable

#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int &y  = num;

    cout << "num = " << num << endl;
    cout << "y   = " << y   << endl;

    cout << "&num  = " << &num  << endl;
    cout << "&y    = " << &y    << endl;

    return 0;
}
