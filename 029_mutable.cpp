// C++ program to understand mutable

#include <iostream>

using namespace std;

struct st
{
    // int  num;
    mutable int num;
    char ch;
};

int main()
{
    const struct st s1 = {10, 'a'};

    s1.num = 20;

    cout << "s1.num = " << s1.num << endl;

    return 0;
}
