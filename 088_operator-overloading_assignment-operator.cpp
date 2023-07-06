// C++ program to understand operator overloading - assignment operator
// Assignment operator can be overloaded only when operator function is member function

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
            num = 10;
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
        void operator = (A &obj)
        {
            cout << "In assignment operator function ..." << endl;
            num = 20;
        }
};

int main()
{
    A a1, a2;

    a1.getData();

    a2 = a1;

    a2.getData();

    a1.getData();

    return 0;
}
