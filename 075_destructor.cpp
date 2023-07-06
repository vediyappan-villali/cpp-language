// C++ program to understand the destructor

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A()
        {
            cout << "In constructor ..." << endl;
        }
        ~A()
        {
            cout << "In destructor ..." << endl;
        }
};

int main()
{
    A a1;

    {
        static A a2;
        cout << "In block ..." << endl;
    }

    cout << "In main ..." << endl;

    return 0;
}
