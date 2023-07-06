// C++ program to understand operator overloading - extraction operator
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
        void getData()
        {
            cout << "num = " << num << endl;
        }
        friend istream & operator >> (istream &in, A obj);
};

istream & operator >> (istream &in, A obj)
{
    cout << "In operator function ..." << endl;
    cout << "Enter value of obj.num: ";
    in >> obj.num;
    obj.num = obj.num;
}

int main()
{
    A a1;

    a1.getData();

    cin >> a1;

    a1.getData();

    return 0;
}
