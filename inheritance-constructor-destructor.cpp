// C++ program to understand order of execution of constructor and destructor
// in inheritance

#include <iostream>

using namespace std;

class A
{
    private:
        int num1;
    public:
        A()
        {
            cout << "In class A constructor" << endl;
        }
        ~A()
        {
            cout << "In class A destructor" << endl;
        }
};

class B
{
    private:
        int num2;
    public:
        B()
        {
            cout << "In class B constructor" << endl;
        }
        ~B()
        {
            cout << "In class B destructor" << endl;
        }
};

class C : public A, public B
{
    private:
        int num3;
    public:
	C()
        {
            cout << "In class C constructor" << endl;
        }
	~C()
        {
            cout << "In class C destructor" << endl;
        }
};

int main(void)
{
    C c1;

    return 0;
}
