// C++ program to understand inheritance

#include <iostream>

using namespace std;

class BANK
{
    int    accountNumber;
    string name;
    float  balance;
};

class SAVINGS : public BANK
{
};

int main()
{
    return 0;
}
