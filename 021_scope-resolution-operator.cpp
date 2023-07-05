// C++ program to understand scope resolution operator

#include <iostream>

using namespace std;

int num = 100;

int main()
{
    int num = 10;

    // cout << "num = " << num << endl;
    cout << "num = " << ::num << endl;

    {
        int num = 20;

        // cout << "num = " << num << endl;
        cout << "num = " << ::num << endl;
    }
    
    return 0;
}
