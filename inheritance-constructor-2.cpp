// C++ program to understand order of execution of constructor in inheritance

#include <iostream>

using namespace std;

class A
{
    private:
        int num1;
    public:
        A()
        {
            cout << "In base class constructor - default" << endl;
        }
        A(int num)
        {
            cout << "In base class constructor - parameterized" << endl;
        }
};

class B : public A
{
    private:
        int num2;
    public:
        B() : A(100)
        {
            cout << "In derived class constructor" << endl;
        }
};

int main(void)
{
    B b1;

    return 0;
}
