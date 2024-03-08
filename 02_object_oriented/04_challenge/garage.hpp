#pragma once

#include "car.hpp"

#include <string>

class Garage {
public:
    Garage();
    void addCar(Car* car);
    void removeCar(Car* car);
    int const getNumCars();
private:
    std::vector<Car*> cars;
};
