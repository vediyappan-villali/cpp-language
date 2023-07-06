// C++ program to understand constructor

// Constructor constructs the values i.e. provides data for the object
// Constructor is a special method that is automatically called when an object of a class is created
// Constructor can be used to initialize the data members of new objects
// Constructor is a member function of a class and it's name is the same as class name
// Constructor does NOT have any return type
// Constructor can be defined inside the class declaration or outside the class declaration
// Constructors are mostly declared in the public section of the class though it
// can be declared in the private section of the class
// Constructors can be overloaded
// Constructor can not be declared virtual

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        void setData()
        {
            num = 20;
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
        // Constructor
        // Constructor name is the same as class name
        // Constructor is used to initialize the data member
        // Constructor does NOT have any return type
        A()
        {
            num = 10;
        }
};

int main()
{
    A a1;

    // a1. setData();
    a1.getData();
 
    return 0;
}
