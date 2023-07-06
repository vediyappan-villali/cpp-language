// C++ program to understand copy constructor

#include <iostream>
#include <cstring>

using namespace std;

class A
{
    private:
        int   num;
        char *str;
    public:
        A()
        {
            cout << "In default constructor ..." << endl;
            num = 10;
        }
        A(char *strIn)
        {
            cout << "In parameterized constructor ..." << endl;
            str = new char [strlen(strIn)+1];
            strcpy(str, strIn);
        }
        A(A &obj)
        {
            cout << "In copy constructor ..." << endl;
            str = new char [strlen(obj.str)+1];
            strcpy(str, obj.str);
        }
        void modifyData()
        {
            str[0] = 's';
        }
        void getData()
        {
            cout << str << endl;
        }
};

int main()
{
    A a1;

    A a2("Vediyappan");

    A a3(a2);

    a1.getData();

    a2.getData();

    a3.getData();

    a2.modifyData();

    a3.getData();

    return 0;
}


