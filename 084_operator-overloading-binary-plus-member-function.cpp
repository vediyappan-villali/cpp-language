// C++ program to understand operator overloading of binary '+' operator
// Operator function as member function

#include <iostream>

using namespace std;

class A
{
    private:
        float real;
        float imag;
    public:
        A(float realIn, float imagIn)
        {
            cout << "In paramerized constructor ... " << endl;
            real = realIn;
            imag = imagIn;
        }
        A()
        {
            cout << "In default constructor ... " << endl;
        }
        void getData()
        {
            cout << "real = " << real << endl;
            cout << "imag = " << imag << endl;
        }
        A operator+(A obj)
        {
            A objTemp;
            objTemp.real = real+obj.real;
            objTemp.imag = imag+obj.imag;
            return objTemp;
        }
};

int main()
{
    A a1(10, 20);
    A a2(30, 40);
    A a3;

    a3 = a1 + a2;

    a3.getData();

    return 0;
}
