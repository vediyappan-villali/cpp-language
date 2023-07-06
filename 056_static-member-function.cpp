// C++ program to understand static member function

// NOTE: Static data members can be accessed by any function
// NOTE: Static member functions can access only static data members
// NOTE: Static member functions can be invoked with class name using scope
// resolution operator

#include <iostream>

using namespace std;

class item
{
    private:
               int    itemNo;
               string itemName;
        static int    count;
    public:
        void setData()
        {
            cout << "Enter item number: ";
            cin  >> itemNo;
            cout << "Enter item name: ";
            cin  >> itemName;
            count++;
        }
        void getData()
        {
            cout << "Item number = " << itemNo << endl;
            cout << "Item name   = " << itemName << endl;
        } 
        static void displayCount()
        {
            // Static member functions can access only static data members
            // error: invalid use of member ‘item::itemNo’ in static member function
            // cout << "Item number = " << itemNo << endl;

            cout << "Total count = " << count << endl;
        }
};

// Memory is allocated for static data member when this syntax is used
int item :: count;

int main()
{
    item i1, i2, i3;

    i1.setData();
    i2.setData();
    i3.setData();

    i1.getData();
    i2.getData();
    i3.getData();

    // error: cannot call member function ‘void item::getData()’ without object
    // item :: getData();

    // Static member functions can be invoked with class name using scope resolution operator
    item :: displayCount();

    return 0;
}
