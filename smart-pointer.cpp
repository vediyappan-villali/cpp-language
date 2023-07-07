// C++ program to understand smart pointer

#include <iostream>

using namespace std;

class A
{
    private:
        int num;
    public:
        A(int numIn)
        {
            num = numIn;
        }
        void display()
        {
            cout << num << endl;
        }
};

class B
{
    private:
        A *ptr;
    public:
        B(A *ptrIn)
        {
            ptr = ptrIn;
        }
        A * operator -> ()
        {
            return ptr;
        }
};

int main (void)
{
    B b1(new A(10));

    b1->display();

    return 0;
}
