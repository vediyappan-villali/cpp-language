// C++ program to understand operator overloading of pre and post increment operators
// Operator function as friend function

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
        friend void operator++(A &obj);
        friend void operator++(A &obj, int);
};

void operator++(A &obj)
{
    obj.num = ++obj.num;
}

void operator++(A &obj, int)
{
    obj.num = obj.num++;
}

int main()
{
    A a1;

    a1.getData();

    ++a1;

    a1.getData();

    a1++;

    a1.getData();

    ++a1;

    a1.getData();

    return 0;
}
