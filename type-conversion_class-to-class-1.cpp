// C++ program to understand class to class type conversion - destination side

#include <iostream>

using namespace std;

class A
{
    private:
        int num1;
        int num2;
    public:
        A()
        {
            cout << "In class A default constructor..." << endl;
            num1 = 10;
            num2 = 20;
        }

        int get_num1()
        {
            return num1;
        }

        int get_num2()
        {
            return num2;
        }
};

class B
{
    private:
        int num1;
        int num2;
    public:
        B()
        {
            cout << "In class B default constructor..." << endl;
        }

        B(A a1)
        {
            num1 = a1.get_num1();
            num2 = a1.get_num2();
        }

        void display()
        {
            cout << num1 << endl << num2 << endl;
        }
};

int main(void)
{
    A a1;
    B b1;

    b1 = a1;

    b1.display();
}
