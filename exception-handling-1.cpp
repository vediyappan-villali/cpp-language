// C++ program to understand the exception handling

#include <iostream>

using namespace std;

int div_func(int num1, int num2)
{
    if(num2 == 0)
    {
        throw "Divide by zero!";
    }
    else
    {
        return num1/num2;
    }
}

int main(void)
{
    int num1;
    int num2;
    int quot;

    cout << "Enter num1: ";
    cin  >> num1;
    cout << "Enter num2: ";
    cin  >> num2;

    try {
        quot = div_func(num1, num2);

        cout << "Quotient = " << quot << endl;
    }

    catch(const char *ptr)
    {
        cout << "In catch block" << endl;
        cout << ptr << endl;
    }
    cout << "After catch block" << endl;

    return 0;
}
