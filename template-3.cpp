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
    int sum1 = add(10, 20);

    cout << "sum1 = " << sum1 << endl;

    float sum2 = add(10.2f, 20.5f);

    cout << "sum2 = " << sum2 << endl;

    return 0;
}
