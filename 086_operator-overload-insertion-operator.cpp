// C++ program to understand operator overloading - insertion operator
// Overload of inseration and extraction operators can be done as friend functions only

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
        friend ostream & operator << (ostream &out, A obj);
};

ostream & operator << (ostream &out, A obj)
{
    cout << "In operator function ..." << endl;
    out << obj.num;
}

int main()
{
    A a1;

    cout << a1 << endl;

    return 0;
}
