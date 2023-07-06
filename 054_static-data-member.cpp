// C++ program to understand static data members
// Data members which are declared as "static" are common to all the objects

#include <iostream>

using namespace std;

class A
{
    private:
               int num1;
        static int num2;
    public:
        void set()
        {
            num1 = 10;
            num2 = 20;
        }
        void get()
        {
            cout << "num1 = " << num1 << endl;
            cout << "num2 = " << num2 << endl;
        }
};

// Memory is allocated for static data member when this syntax is used
int A::num2;

int main()
{
    // Memory is not allocated for static data members when an object is created
    A a1, a2;

    // Size of static data members are not included in size of an object/class
    cout << "sizeof(a1) = " << sizeof(a1) << endl;
    cout << "sizeof(a2) = " << sizeof(a2) << endl;

    a1.set();

    a2.get();

    return 0;
}
