// C++ program to understand the append pre-defined member function

#include <iostream>

using namespace std;

int main()
{
    string str1 = "Jai";
    string str2 = " Hind";

    str1.append(str2);

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    return 0;
}
