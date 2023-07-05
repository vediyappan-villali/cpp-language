// C++ program to understand function overloading

#include <iostream>

using namespace std;

void display(int num)
{
    cout << "num = " << num << endl;
}

// Number of arguments differ
void display(int num1, int num2)
{
    cout << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
}

// Type of arguments differ
void display(int num, char ch)
{
    cout << "num = " << num << ", " << "ch = " << ch << endl;
}

// Order of arguments differ
void display(char ch, int num)
{
    cout << "ch = " << ch << ", " << "num = " << num << endl;
}

int main()
{
    int  num1 = 10;
    int  num2 = 20;
    char ch   = 'a';

    display(num1);

    display(num1, num2);

    display(num1, ch);
    
    display(ch, num1);

    return 0;
}
