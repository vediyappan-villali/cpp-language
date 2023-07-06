// C++ program to understand friend function

// Friend functions are non-member functions that can access and manipulate the
// private and protected members of a class as they are declared as "friend"
// Friend function can be a global function or a member function of another class
// Friend function requires object as well
// Friend declaration appears in the class which grants friendship
// Friendship is granted, not taken
// Not symmetric i.e., if B is a friend of A, A not necessarily a friend of B
// Not transitive i.e., if A is a friend of B, B is a friend of C, A not necessarily a friend of C
// Possible to make a friendship to any number of classes

#include <iostream>

using namespace std;

class wife;
class husband
{
    private:
        string name;
        int    salary;
    public:
        void setData()
        {
            cout << "Enter husband's name: ";
            cin  >> name;
            cout << "Enter husband's salary: ";
            cin  >> salary;
        }
        void getData()
        {
            cout << "Husband's name: " << name << endl;
            cout << "Husband's salary: " << salary << endl;
        }
        // Friend declaration appears in the class which grants friendship
        // Friendship is granted
        friend int totalSalary(husband, wife);
};
class wife
{
    private:
        string name;
        int    salary;
    public:
        void setData()
        {
            cout << "Enter wife's name: ";
            cin  >> name;
            cout << "Enter wife's salary: ";
            cin  >> salary;
        }
        void getData()
        {
            cout << "Wife's name: " << name << endl;
            cout << "Wife's salary: " << salary << endl;
        }
        // Friend declaration appears in the class which grants friendship
        // Friendship is granted
        friend int totalSalary(husband, wife);
};

// Friend function is a non-member function, defined outside class
// Friend function requires object as well
int totalSalary(husband h, wife w)
{
    return h.salary + w.salary;
}

int main()
{
    husband h1;
    wife    w1;

    h1.setData();
    w1.setData();

    h1.getData();
    w1.getData();

    cout << "Total salary = " << totalSalary(h1, w1) << endl;

    return 0;
}
