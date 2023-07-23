// C++ program to write the data into a file

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    char buf[32];

    ofstream fout;

    fout.open("sample.txt", ios :: out);
    if(fout.fail())
    {
        cout << "File not opened" << endl;
    }
    else
    {
        cout << "File is opened" << endl;
    }

    cout << "Enter data to be writen in file: " << endl;
    cin >> buf;

    fout << buf;

    fout.close();

    return 0;
}
