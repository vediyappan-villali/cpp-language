// C++ program to understand static object

// NOTE: All data members of static object is initialized with 0 by default
// NOTE: Scope of the static object throughout the program 
#include <iostream>

using namespace std;

class A
{
    private:
        int   num;
        float realNum;
    public:
        void set()
        {
        }
        void get()
        {
            cout << "num = " << num << endl;
            cout << "relaNum = " << realNum << endl;
        }
};

int main()
{
    // Data members of non-static object is uninitialized, contains garbage values
    // A a1;

    // All data members of static object is initialized with 0 by default
    static A a1;

    a1.set();
    a1.get();

    return 0;
}
