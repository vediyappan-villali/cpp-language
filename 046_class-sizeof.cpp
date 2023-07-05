// C++ program to understand the size of class

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        void set()
        {
            num = 10;
        }
        void get()
        {
            cout << "num = " << num << endl;
        }
};

int main()
{
    A a1, a2;

    cout << sizeof(a1) << endl;
    cout << sizeof(a2) << endl;

    return 0;
}
