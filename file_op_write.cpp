// C++ program to write to a file

#include <iostream>
#include <fstream>

using namespace std;

class STUDENT
{
    private:
        char  name[32];
        int   rollNumber;
        float percentage;

    public:
        void setData()
        {
            cout << "Enter name: ";
            cin  >> name;
            cout << "Enter roll number: ";
            cin  >> rollNumber;
            cout << "Enter percentage: ";
            cin  >> percentage;
        }

        void getData()
        {
            cout << "Name = " << name << endl;
            cout << "Roll number = " << rollNumber << endl;
            cout << "Percentage = " << percentage << endl;
        }
};
int main()
{
    STUDENT s1, s2;
    fstream fout;

    s1.setData();
    s1.getData();

    fout.open("sample.txt", ios :: out);
    if(fout.fail())
    {
        cout << "Failed to open file" << endl;
    }

    cout << "Writing to the file..." << endl;
    fout.write((char *)&s1, sizeof(s1));

    fout.close();

    fout.open("sample.txt", ios :: in);
    if(fout.fail())
    {
        cout << "Failed to open file" << endl;
    }

    cout << "Reading from the file..." << endl;
    fout.read((char *)&s2, sizeof(s2));

    s2.getData();
    
    return 0;
}
