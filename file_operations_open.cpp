// C++ program to open the file in various modes

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    fstream  fobj;

    // Open the file in input mode (read-only)
    // If the file does not exist, a new file will not be created
    fin.open("sample1.txt", ios :: in);
    if(fin.fail())
    {
        cout << "File is not available" << endl;
    }
    else
    {
        cout << "File is available" << endl;
    }

    // Open the file in output mode (write-only)
    // If the file does not exists, a new file will be created
    // If the file already exists, its content will be truncated
    fout.open("sample2.txt", ios :: out);
    // fout.open("sample2.txt", ios :: trunc);
    if(fout.fail())
    {
        cout << "File is not available" << endl;
    }
    else
    {
        cout << "File is available" << endl;
    }

    // Open the file in append mode
    // If the file does not exists, a new file will be created
    // Data written to the file is appended at the end
    fobj.open("sample3.txt", ios :: app);
    // fobj.open("sample3.txt", ios :: trunc);
    if(fobj.fail())
    {
        cout << "File is not available" << endl;
    }
    else
    {
        cout << "File is available" << endl;
    }

    // Open the file in binary mode
    // If the file does not exist, a new file will not be created
    // Data is read/written in binary format, without any automatic text transformations
    fobj.open("sample4.txt", ios :: binary);
    if(fobj.fail())
    {
        cout << "File is not available" << endl;
    }
    else
    {
        cout << "File is available" << endl;
    }

    return 0;
}
