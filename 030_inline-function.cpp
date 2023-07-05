// C++ program to understand inline function

#include <iostream>

using namespace std;

void display(int num);

int main()
{
    int num = 10;

    display(num);

    return 0;
}

inline void display(int num)
{
    cout << "num = " << num << endl;
}
