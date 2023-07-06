// C++ program to understand class

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
        void set()
        {
            num = 10;
        }
    public:
        void get()
        {
            set();

            cout << "num = " << num << endl;
        }
};

int main()
{
    A a1;

    // a1.set();

    a1.get();

    return 0;
}
