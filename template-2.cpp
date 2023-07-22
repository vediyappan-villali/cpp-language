// C++ program to understand template

#include <iostream>

using namespace std;

template <typename T>
T add(T num1, T num2)
{
    return num1 + num2;
}

int main(void)
{
    // int sum = add(10, 20);
    int sum = add(10.5, 20);

    cout << "sum = " << sum << endl;

    return 0;
}
