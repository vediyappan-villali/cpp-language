// C++ program to understand operator overloading

// error: no match for ‘operator+’ (operand types are ‘A’ and ‘A’)

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
};

int main()
{
    A a1, a2, a3;
	
    a3 = a1 + a2;
	
    return 0;
}
