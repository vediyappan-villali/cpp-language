// C++ program to understand class to base type conversion

#include <iostream>

using namespace std;

class A
{
    private:
        int   num_int;
        float num_float;

    public:
        A()
        {
            cout << "In default constructor..." << endl;
            num_int   = 10;
            num_float = 3.14;
        }

        operator int()
        {
            return num_int;
        }

        operator float()
        {
            return num_float;
        }
};

int main(void)
{
    A a1;
    int num_int;
    float num_float;

    num_int = a1;
    num_float = a1;

    cout << num_int << " " << num_float << endl;

    return 0;
}
