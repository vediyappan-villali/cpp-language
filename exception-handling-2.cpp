// C++ program to understand the exception handling - multiple catch blocks

#include <iostream>

using namespace std;

void func(int num)
{
    try
    {
        if(num == 0)
        {
            throw num;
        }
        else if(num < 0)
        {
            throw 'n';
        }
        else if(num > 0)
        {
            throw 1.0f;
        }
    }

    catch(int num)
    {
        cout << "Integer catch block" << endl;
        cout << num << endl;
    }

    catch(char alpha)
    {
        cout << "Character catch block" << endl;
        cout << alpha << endl;
    }

    catch(float full)
    {
        cout << "Float catch block" << endl;
        cout << full << endl;
    }

    catch(...)
    {
        cout << "Catch all" << endl;
    }
    
}

int main(void)
{
    func(-5);
    func(0);
    func(5);

    return 0;
}
