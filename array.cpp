// C++ program to understand array

#include <iostream>

using namespace std;

int main() {
    string fruits[4] = {"apple", "banana", "graphes", "mango"};

    for (int i = 0; i < 4; i++) {
        cout << fruits[i] << ' ';
    }
    cout << endl;

    fruits[2] = "orange";

    for (int i = 0; i < 4; i++) {
        cout << fruits[i] << ' ';
    }
    cout << endl;

    return 0;
}
