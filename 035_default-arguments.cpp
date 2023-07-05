// C++ program to understand default arguments

#include <iostream>

using namespace std;

void print(int num)
{
    cout << "num = " << num << endl;
}

void print(int &numalias)
{
    cout << "numalias = " << numalias << endl;
}

int main()
{
    int num = 10;

    print (num);

    return 0;
}
