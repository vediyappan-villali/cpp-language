// C++ program to understand member function

#include <iostream>

using namespace std;

class A
{
    int   i;
    char  c;
    float f;
    // void add(int num1, int num2);
    void add(int num1, int num2)
    {
        cout << "Sum = " << num1 + num2 << endl;
    }
};

int main()
{
    return 0;
}
