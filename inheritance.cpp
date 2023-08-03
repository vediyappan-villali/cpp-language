// C++ program to understand inheritance

#include <iostream>

using namespace std;

class VEHICLE {
    public:
        string category = "Vechicle";
};

class BIKE : public VEHICLE {
    public:
        string subCategory = "Bike";
        int wheelsCount = 2;
};

class CAR : public VEHICLE {
    public:
        string subCategory = "Car";
        int wheelsCount = 4;
};
int main() {
    BIKE objBike;
    CAR objCar;

    cout << objBike.category << " " << objBike.subCategory << " "<< objBike.wheelsCount << endl;
    cout << objCar.category << " " << objCar.subCategory << " " << objCar.wheelsCount << endl;

    return 0;
}
