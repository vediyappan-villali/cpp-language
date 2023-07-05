// C++ program to understand the class

#include <iostream>

using namespace std;

class A
{
    protected:
        int num;
};

int main()
{
    A a1;

    a1.num = 10;

    cout << "a1.num = " << a1.num << endl;

    return 0;
}
