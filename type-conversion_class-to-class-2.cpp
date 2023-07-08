// C++ program to understand class to class type conversion - source side

#include <iostream>

using namespace std;

class B
{
    private:
        int num1;
        int num2;

    public:
        B()
        {
        }

        int &get_num1()
        {
            return num1;
        }

        int &get_num2()
        {
            return num2;
        }

        void display()
        {
            cout << num1 << " " << num2 << endl;
        }
};

class A
{
    private:
        int num1;
        int num2;

    public:
        A()
        {
            num1 = 10;
            num2 = 20;
        }

        operator B()
        {
            B temp;
            temp.get_num1() = num1;
            temp.get_num2() = num2;
            return temp;
        }
};

int main(void)
{

    A a1;
    B b1;

    b1 = a1;

    b1.display();
}
