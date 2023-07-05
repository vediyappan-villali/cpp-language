// C++ program to understand default arguments to a function

#include <iostream>

using namespace std;

void display(int, int, int = 60);
void display(int, int);

int main()
{
    display(10, 20);

    return 0;
}

void display(int num1, int num2, int num3)
{
    cout << "num1 = " << num1 << " num2 = " << num2 << " num3 = " << num3 << endl;
}

void display(int num1, int num2)
{
    cout << "num1 = " << num1 << " num2 = " << num2 << endl;
}
