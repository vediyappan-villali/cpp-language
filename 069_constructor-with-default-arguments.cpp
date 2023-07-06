// C++ program to understand the constructor with default arguments

#include <iostream>

using namespace std;

class C
{
    private:
        float real;
        float imag;
    public:
        C(float real, float imag = 1)
        {
            cout << "In constructor with default argument ..." << endl;
            cout << "real = " << real << endl;
            cout << "imag = " << imag << endl;
        }
        void getData()
        {
            cout << "real = " << real << endl;
            cout << "imag = " << imag << endl;
        }
};


int main()
{
    C c1(5.0);
    C c2(5.0, 3.0);

    return 0;
}
