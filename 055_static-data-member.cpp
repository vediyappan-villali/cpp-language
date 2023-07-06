// C++ program to understand static data member

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
        void displayCount()
        {
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
    i3.setData();

    i1.getData();
    i2.getData();
    i3.getData();

    i1.displayCount();

    return 0;
}
