// C++ program to understand the class

#include <iostream>

using namespace std;

class A
{
    //private:
    public:
        int num;
    public:
        void set();
        void get()
        {
            cout << "num = " << num << endl;
        }
};

void A::set()
{
    num = 10;
}

/*
void func()
{
    cout << "num = " << num << endl;
}
*/

void func(A a)
{
    cout << "a.num = " << a.num << endl;
}

int main()
{
    A a1;

    a1.set();

    a1.get();

    func(a1);

    return 0;
}
