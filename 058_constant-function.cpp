// C++ program to understand constant functions

// NOTE: Constant functions are NOT allowed to modify the data members of an object
// NOTE: If constant function want to modify the data, then "mutable" can be used

#include <iostream>

using namespace std;

class A
{
    private:
                int num1;
        mutable int num2;
    public:
        void set() const
        {
            // Constant functions are NOT allowed to modify the data members of an object
            // error: assignment of member ‘A::num1’ in read-only object
            // num1 = 10;

            // If constant function want to modify the data, then "mutable" can be used
            num2 = 20;
        }
        void get()
        {
            cout << "num1 = " << num1 << endl;
            cout << "num2 = " << num2 << endl;
        }
};

int main()
{
    A a1;

    a1.set();

    a1.get();

    return 0;
}
