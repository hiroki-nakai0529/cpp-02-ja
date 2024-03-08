#include "driver.hpp"

#include <iostream>

Driver::Driver(std::string name, int age) : name(name), age(age) {
    if (age < 0) {
        std::cerr << "Negative Age!" << "\n";
    }
}

std::string Driver::getDriverName() {
    return name;
}