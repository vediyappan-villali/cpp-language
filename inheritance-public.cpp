// C++ program to understand inheritance - public access specifier

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
    // protected members of parent class will be given with protected access specifier
    // public members of parent class will be given with public access specifier
    // protected:
        // int num2;
    // public:
        // int num3;
    public:
        void setData()
        {
            // error: ‘int A::num1’ is private within this context
            // num1 = 10;
            num2 = 20;
            num3 = 30;
        }

        void getData()
        {
            cout << num2 << " " << num3 << endl;
        }
};

int main(void)
{
    B b1;

    b1.setData();
    
    b1.getData();

    return 0;
}
