// C++ program to understand function overloading

#include <iostream>

using namespace std;

void add(int num1, int num2)
{
    cout << "Sum = " << num1 + num2 << endl;
}

void add(char num1, int num2)
{
    cout << "Sum = " << num1 + num2 << endl;
}
void add(int num1, int num2, int num3)
{
    cout << "Sum = " << num1 + num2 + num3 << endl;
}

int main()
{
    add(10, 20);
    
    add('a', 20);

    add(10, 20, 30);

    return 0;
}
