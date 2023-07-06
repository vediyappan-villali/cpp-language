// C++ program to understand parameterized constructor defined outside class

// When parameterized constructors are created or instantiated, they are used to initialize
// and hold the various data elements of different objects having different values
// Parameterized constructors are used to overload constructors

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
        A(int iNum);
        void getData()
        {
            cout << "num = " << num << endl;
        }
};
A :: A(int iNum)
{
    cout << "In parameterized constructor ..." << endl;
    num = iNum;
};
int main()
{
    // Default constructor
    A a1;

    // Parameterized constructor
    A a2(20);

    cout << "Just a test message ..." << endl;

    // Constructor overloading
    A a3(30);

    a1.getData();
    a2.getData();
    a3.getData();

    return 0;
}
