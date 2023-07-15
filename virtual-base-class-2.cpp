// C++ program to understand virtual base class

#include <iostream>

using namespace std;

class A
{
    public:
        int num1;

        A()
        {
            num1 = 10;
        }

        void getData()
        {
            cout << "num1 = " << num1 << endl;
        }
};

class B : virtual public A
{
    public:
        int num2;
};

class C : virtual public A
{
    public:
        int num3;
};

class D : public B, public C
{
    public:
        int num4;
};

int main(void)
{
    D d1;

    d1.getData();

    d1.num3 = 300;
    d1.num2 = 200;
    d1.num1 = 100;

    d1.getData();

    return 0;
}
