// C++ program to understand - constructor can be used to initialize const data members

// Note to invoke static functions

#include <iostream>

using namespace std;

class A
{
    private:
        const int num;
    public:
        A():num(10)
        {
        }
        void getData()
        {
            cout << "num = " << num << endl;
        }
};

int main()
{
    A a1;

    a1.getData();

    return 0;
}
