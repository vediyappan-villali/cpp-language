// C++ program to understand namespace

#include <iostream>

using namespace std;

int main()
{
    int num = 10;

    cout << "num = " << num << endl;

    {
        int num = 20;

        cout << "num = " << num << endl;
    }

    return 0;
}
