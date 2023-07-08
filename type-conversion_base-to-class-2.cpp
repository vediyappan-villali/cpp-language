// C++ program to convert base to class conversion

#include <iostream>

using namespace std;

class TIME
{
    private:
        int hour;
        int minute;
    public:
        TIME()
        {
            cout << "Default constructor..." << endl;
        }
        TIME(int t)
        {
            cout << "Paramerized constructor..." << endl;
            hour = t/60;
            minute = t%60;
        }
        void getData()
        {
            cout << hour << ":" << minute << endl;
        }
};
int main(void)
{
    TIME t1;
    t1 = 100;
    t1.getData();
}
