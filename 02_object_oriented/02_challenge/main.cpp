#include "driver.hpp"
#include "car.hpp"

#include <iostream>

int main(){
    Car car("make", "model", 0, 100.0);
    Driver driver("hoge", 20);
    car.setDriver(&driver);
    Driver get_driver = car.getDriver();
    std::cout << get_driver.getDriverName() << std::endl;
    return 0;
}