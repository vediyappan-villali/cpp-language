// C++ program to understand the template.

#include <iostream>

using namespace std;

template <typename T>
T big(T var1, T var2)
{
    return (var1 > var2 ? var1 : var2);
}

int main(void)
{
    cout << big(5,10) << endl;

    cout << big('a', 'c') << endl;

    cout << big(95.5f, 40.0f) << endl;

    return 0;
}
