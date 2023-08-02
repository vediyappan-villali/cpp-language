// C++ program to understand polymorphism

#include <iostream>

using namespace std;

// Base class
class VEHICLE {
    public:
       void wheelsCount() {
           cout << "The vehicle has wheels" << endl;
       }
};

// Derived class
class BIKE : public VEHICLE {
    public:
        void wheelsCount() {
            cout << "The bike has 2 wheels" << endl;
        }
};

// Derived class
class CAR : public VEHICLE {
    public:
        void wheelsCount() {
            cout << "The car has 4 wheels" << endl;
        }
};

int main() {
    VEHICLE objVehicle;
    BIKE    objBike;
    CAR     objCar;

    objVehicle.wheelsCount();
    objBike.wheelsCount();
    objCar.wheelsCount();

    return 0;
}
