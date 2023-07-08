// C++ program to understand class to base type conversion

#include <iostream>

using namespace std;

class A
{
    private:
        int num;

    public:
        A()
        {
            cout << "In default constructor..." << endl;
            num = 10;
        }

        operator int()
        {
            return num;
        }
            
};

int main(void)
{
    A a1;
    int num;

    num = a1;

    cout << num << endl;

    return 0;
}
