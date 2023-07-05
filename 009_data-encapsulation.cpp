// C++ program to understand data encapsulation

#include <iostream>

using namespace std;

class A
{
    int num;
    void func1()
    {
        cout << __func__ << ": Entry" << endl;
        cout << __func__ << ": Exit" << endl;
    }
};

void func2()
{
    cout << __func__ << ": Entry" << endl;

    cout << __func__ << ": num = " << num << endl;

    cout << __func__ << ": Exit" << endl;
}

int main()
{
    // func1();

    func2();

    return 0;
}
