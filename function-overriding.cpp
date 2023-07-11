// C++ program to understand function overriding

#include <iostream>

using namespace std;

class A
{
    private:
        int num1;
    protected:
        int num2;
    public:
        int num3;

        void func()
        {
            cout << "In base class func()" << endl;
        }
};

class B: public A
{
    private:
        int num4;
    protected:
        int num5;
    public:
        int num6;

        void func()
        {
            cout << "In derived class func()" << endl;
            // To execute func() of class A
            // A :: func();
        }
};

int main(void)
{
    A a1;

    B b1;

    b1.func();

    return 0;
}
