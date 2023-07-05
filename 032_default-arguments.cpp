// C++ program to understand default arguments to a function

#include <iostream>

using namespace std;

void display(int, int = 30);

int main()
{
    display(10);

    return 0;
}

void display(int num1, int num2)
{
    cout << "num1 = " << num1 << " " << "num2 = " << num2 << endl;
}
