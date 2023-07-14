// C++ program to understand virtual base class

#include <iostream>

using namespace std;

class A
{
    public:
        int num1;
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

    d1.num3 = 300;
    d1.num2 = 200;
    d1.num1 = 100;

    return 0;
}
