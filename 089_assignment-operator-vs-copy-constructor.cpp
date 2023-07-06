// C++ program to understand when copy constructor and assignment operator overloading
// function are called

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
        }
        A(int numIn)
        {
            cout << "In copy constructor ..." << endl;
            num = numIn;
        }
        void setData()
        {
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
        void operator = (A &obj)
        {
            cout << "In assignment operator function ..." << endl;
            num = obj.num;
        }
};

int main()
{
    A a1(10);
    A a2;

    a1.getData();

    a2 = a1;

    a2.getData();

    return 0;
}
