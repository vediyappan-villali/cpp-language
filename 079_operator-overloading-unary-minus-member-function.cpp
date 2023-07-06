// C++ program to understand unary minus operator overloading
// Operator function as member function

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
            num = 10;
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }

/*
        void modifyData()
        {
            num = -num;
        }
*/
        void operator-()
        {
            num = -num;
        }
};

int main()
{
    A a1;

    a1.getData();

    // a1.modifyData();

    -a1;

    a1.getData();

    return 0;
}
