// C++ program to understand default arguments

#include <iostream>

using namespace std;

void print(float f);
void print(char ch);

void print(float num)
{
    cout << "num = " << num << endl;
}

void print(char ch)
{
    cout << "ch = " << ch << endl;
}

int main()
{
    print(100);
    print(100.0f);
    print('1');

    return 0;
}
