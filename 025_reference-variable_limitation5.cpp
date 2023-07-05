// C++ program to understand reference variable aka call by reference

#include <iostream>

using namespace std;

void display(int &y)
{
    y = 200;
}

int main()
{
    int num = 10;

    display(num);

    cout << "num = " << num << endl;

    return 0;
}
