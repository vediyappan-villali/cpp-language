// C++ program to understand the class

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
};

int main()
{
    A a1;

    a1.num = 10;

    cout << "a1.num = " << a1.num << endl;

    return 0;
}
