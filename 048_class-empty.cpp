// C++ program to understand the empty class

#include <iostream>

using namespace std;

class A
{
    protected:
        void set()
        {
        }
        void get()
        {
        }
};

int main()
{
    A a1, a2;

    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;

    return 0;
}
