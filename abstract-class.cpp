// C++ program to illustrate abstract class

#include <iostream>

using namespace std;

class A
{
    private:
        int num1;
    public:
        A()
        {
            cout << "Base class constructor" << endl;
        }
        virtual ~A()
        {
            cout << "Base class destructor" << endl;
        }
};

class B : public A
{
    private:
        int num1;
    public:
        B()
        {
            cout << "Derived class constructor" << endl;
        }
        ~B()
        {
            cout << "Derived class destructor" << endl;
        }
};

int main(void)
{
    A *ptr;

    ptr = new B;

    delete ptr;

    return 0;
}
