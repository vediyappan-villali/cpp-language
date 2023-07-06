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
            cout << "In constructor ..." << endl;
            num = numIn;
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
        ~A()
        {
            cout << "In destructor ..." << endl;
        }
};

int main()
{
    A *ptr = new A(10);

    ptr->getData();

    delete ptr;

    return 0;
}

