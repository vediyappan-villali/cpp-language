// C++ program to understand encapsulation

// Encapsulation means that the sensitive data can be hidden from users
// This can be achieved by declaring variables/attributes as private
// Private members cannot be accessed outside the class

#include <iostream>

using namespace std;

class EMPLOYEE
{
    private:
        // Private variable
        float  salary;
    public:
        void setSalary(float sal)
        {
            salary = sal;
        }

        void getSalary()
        {
            cout << "Salary = " << salary << endl;
        }

};

int main()
{
    EMPLOYEE emp;

    emp.setSalary(1000.0f);

    emp.getSalary();

    return 0;
}
