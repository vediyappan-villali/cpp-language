// C++ program to understand the constructor

// Constructor can be defined inside the class declaration or outside the class declaration

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A();
        void getData()
        {
            cout << "num = " << num << endl;
        }
};

// Constructor defined outside the class declaration
A :: A()
{
    num = 10;
}

int main()
{
    A a1;

    a1.getData();

    return 0;
}
