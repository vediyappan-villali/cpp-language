// C++ program to understand recusion

#include <iostream>

using namespace std;

int sum_of_numbers (int num) {
    if (num > 0) {
        return num + sum_of_numbers(num - 1);
    }
    else {
        return 0;
    }
}
int main() {
    int num;

    cout << "Enter number: ";
    cin  >> num;

    cout << "Sum of the numbers = " << sum_of_numbers(num) << endl;
    
    return 0;
}
