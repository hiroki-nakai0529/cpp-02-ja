#include "garage.hpp"

#include <iostream>

Garage::Garage(){}
void Garage::addCar(Car* car){
    cars.push_back(car);
}
void Garage::removeCar(Car* car){
cars.erase(std::remove_if(cars.begin(), cars.end(),
                    [car](Car* ptr) { return ptr == car; }),
                    cars.end());
}

int const Garage::getNumCars(){
    return this->cars.size();
}