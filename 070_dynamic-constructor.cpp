// C++ program to understand dynamic constructor

// Benefit of dynamic constructor is that strings of different length, effective
// memory utilization

#include <iostream>
#include <cstring>

using namespace std;

class A
{
    private:
        char *str;
    public:
        A(char *strIn)
        {
            cout << "In dynamic constructor ..." << endl;
            str = new char [strlen(strIn)+1];
            strcpy(str, strIn);
        }
        void getData()
        {
            cout << "str = " << str << endl;
        }
};
int main()
{
    A a1("Vediyappan");

    A a2("Vediyappan Villali");

    A a3("Vediyappan Villali Bangalore");

    a1.getData();
    a2.getData();
    a3.getData();

    return 0;
}
