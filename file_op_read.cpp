// C++ program to read from file

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    char buf[32];

    ifstream fin;

    fin.open("sample.txt");

    fin >> buf;

    cout << "Data from file = " << buf << endl;

    return 0;
}
