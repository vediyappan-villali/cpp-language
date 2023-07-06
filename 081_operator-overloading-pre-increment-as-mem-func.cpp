// C++ program to overload pre-increment operator
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
        void operator++()
        {
            num = ++num;
        }
};

int main()
{
    A a1;

    a1.getData();

    ++a1;

    a1.getData();

    return 0;
}
