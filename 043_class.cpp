// C++ program to understand the class

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        void set()
        {
            num = 10;
        }
        void get()
        {
            cout << "num = " << num << endl;
        }
};

int main()
{
    A a1;

    set();

    get();

    return 0;
}
