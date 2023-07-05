// C++ program to define a member function outside class

#include <iostream>

using namespace std;

class A
{
    private:
        int  num;
    public:
        void set();
        void get()
        {
            cout << "num = " << num << endl;
        }
};

//void set()
void A::set()
{
    num = 10;
}

int main()
{
    A a1, a2;

    a1.set();

    a1.get();

    return 0;
}
