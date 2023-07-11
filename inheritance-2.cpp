// C++ program to understand inheritance - protected access specifier

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
};

class B : protected A
{
    private:
        int num4;
    protected:
        int num5;
    public:
        int num6;

        void setData()
        {
            // num1 = 10;
            num2 = 20;
            num3 = 30;
        }

        void getData()
        {
            // cout << num1 << endl;
            cout << num2 << endl;
            cout << num3 << endl;
        }
};

int main(void)
{
    A a1;
    B b1;

    b1.setData();

    b1.getData();

    b1.num2 = 200;

    return 0;
}
