// C++ program to understand parameterized constructor

// Parametrized constructor is a special type of constructor where an object is created,
// and further parameters are passed to distinct objects.
// When programmer want to initialize different objects with different values,
// then the parameterized constructor can be used.

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
            cout << "In default constructor ..." << endl;
            num = 10;
        }
        A(int iNum)
        {
            cout << "In parameterized constructor ..." << endl;
            num = iNum;
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
};
int main()
{
    A a1, a2(20);

    cout << "Just a test message ..." << endl;

    A a3(30);

    a1.getData();
    a2.getData();
    a3.getData();

    return 0;
}
