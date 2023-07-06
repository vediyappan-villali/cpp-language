// C++ program to understand copy constructor

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
            cout << "In default constructor ..." << endl;
            num1 = 10;
            num2 = 20;
        }
        A(int iNum1, int iNum2)
        {
            cout << "In parameterized constructor ..." << endl;
            num1 = iNum1;
            num2 = iNum2;
        }
        A(A &obj)
        {
            cout << "In copy constructor ..." << endl;
            num1 = obj.num1;
            num2 = obj.num2;
        }
        void getData()
        {
            cout << "num1 = " << num1 << endl;
            cout << "num2 = " << num2 << endl;
        }
};

int main()
{
    A a1;
    a1.getData();

    A a2(30, 40);
    a2.getData();

    A a3(a2);
    a3.getData();

    return 0;
}
