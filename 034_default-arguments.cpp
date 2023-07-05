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
    print (10);

    return 0;
}
