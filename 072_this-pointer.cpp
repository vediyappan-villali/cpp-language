// C++ program to understand this pointer

#include <iostream>
#include <cstring>

using namespace std;

class person
{
    private:
        char name[16];
        int  age;
    public:
        person(char *nameIn, int ageIn)
        {
            strcpy(name, nameIn);
            age = ageIn;
        }
        person compare(person obj)
        {
            if(age > obj.age)
            {
                return *this;
            }
            else
            {
                return obj;
            }
        }
        void getData()
        {
            cout << "Elder person = " << name << endl;
        }
};

int main()
{
    person p1("Alice", 32);
    person p2("Bob", 31);
    person p3("Charlie", 34);

    person p = p1.compare(p2);

    p = p.compare(p3);

    p.getData();

    return 0;
}
