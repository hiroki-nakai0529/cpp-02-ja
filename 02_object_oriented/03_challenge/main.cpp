#include "garage.hpp"
#include "car.hpp"

#include <iostream>

int main(){
    Car car("make", "model", 0, 100.0);
    Garage garage;
    garage.addCar(&car);
    std::cout << garage.getNumCars() << std::endl;
    garage.removeCar(&car);
    std::cout << garage.getNumCars() << std::endl;
    return 0;
}