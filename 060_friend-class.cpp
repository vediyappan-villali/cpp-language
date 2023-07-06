// C++ program to understand friend class

// Friend class is a class that can access and manipulate the private and protected
// members of a class as they are declared as "friend"
// Friend class requires object as well
// Friend declaration appears in the class which grants friendship
// Friendship is granted, not taken
// Not symmetric i.e., if B is a friend of A, A not necessarily a friend of B
// Not transitive i.e., if A is a friend of B, B is a friend of C, A not necessarily a friend of C
// Possible to make a friendship to any number of classes

#include <iostream>

using namespace std;

class boy
{
    private:
        string name;
        float  income1;
        float  income2;
    public:
        void setData()
        {
            cout << "Enter boy's name: ";
            cin  >> name;
            cout << "Enter boy's income1: ";
            cin  >> income1;
            cout << "Enter boy's income2: ";
            cin  >> income2;
        }
        void getData()
        {
            cout << "Boy's name = " << name << endl;
            cout << "Boy's income1 = " << income1 << endl;
            cout << "Boy's income2 = " << income2 << endl;
        }
        // Friend declaration appears in the class which grants friendship
        // Friendship is granted
        friend class girl;
};

class girl
{
    private:
        string name;
    public:
        void getData(boy b)
        {
            cout << "In class girl, getting class boy's private data..." << endl;
            // Display private data
            cout << "Boy's name = " << b.name << endl;
            cout << "Boy's income1 = " << b.income1 << endl;
            cout << "Boy's income2 = " << b.income2 << endl;
        }
        void modifyData(boy &obj)
        {
            cout << "In class girl, modifying class boy's private data..." << endl;
            // Manipulate private data
            obj.income1 = obj.income1 + 1000;
            obj.income2 = obj.income2 + 2000;
        }
};

int main()
{
    boy b1;
    girl g1;

    b1.setData();
    b1.getData();

    g1.getData(b1);

    g1.modifyData(b1);

    cout << "After modification of class boy's data in class girl..." << endl;
    b1.getData();
    
    return 0;
}
