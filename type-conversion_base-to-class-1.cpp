// C++ program to understand base to class type conversion

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
            cout << "Default constructor..." << endl;
        }
        A(int num_)
        {
            cout << "Parameterized constructor..." << endl;
            num = num_;
        }
        void get()
        {
            cout << num << endl;
        }
};

int main(void)
{
    A a1;
    a1 = 100;
    a1.get();
    return 0;
}
