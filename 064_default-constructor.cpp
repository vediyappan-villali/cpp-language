// C++ program to understand default constructor

// A constructor without any arguments or with a default value for every argument
// is said to be the default constructor. 
// If the default constructor is not defined in the source code by the programmer, 
// then the compiler defines the default constructor implicitly during compilation.
// If the default constructor is defined explicitly in the program by the programmer,
// then the compiler will not define the constructor implicitly, but it calls the constructor implicitly.

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
            cout << "In default constructor ..." << endl;
            num = 10;
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
};
int main()
{
    A a1, a2;

    cout << "Just a test message ..." << endl;

    A a3;

    a1.getData();
    a2.getData();
    a3.getData();

    return 0;
}
