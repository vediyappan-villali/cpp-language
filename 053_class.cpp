// C++ program to understand class

#include <iostream>

using namespace std;

class A
{
    public:
        int num;
        void set()
        {
            num = 10;
        }
        void get()
        {
            cout << "num = " << num << endl;
        }
};

void func(A &a)
{
    a.num = 100;

    cout << "a.num = " << a.num << endl;
}

int main()
{
    A a1;

    a1.set();
    a1.get();

    func(a1);

    a1.get();

    return 0;
}
