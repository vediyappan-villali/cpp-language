// C++ program to understand how to declare constructor in private access

// In general, constructor need to be declared in public access
// But, it can be declared in private access using static functions

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
        A()
        {
            cout << "In constructor ..." << endl;
            num = 10;
        }
    public:
        void getData()
        {
            cout << "num = " << num << endl;
        }
};

int main()
{
    A a1;

    return 0;
}
