// C++ program to understand nameless object

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A(int numIn)
        {
            cout << "In parameterized constructor ..." << endl;
            num = numIn;
            cout << "num = " << num << endl;
        }
        ~A()
        {
            cout << "In destructor ..." << endl;
        }
        
};

int main()
{
    A a1({10});
    A a2({20});

    return 0;
}
