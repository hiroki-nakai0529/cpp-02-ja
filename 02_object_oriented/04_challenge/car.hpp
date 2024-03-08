#pragma once

#include "driver.hpp"
#include "tire.hpp"
#include <string>

class Car {
public:
    Car(std::string make, std::string model, int year, double price);

    void setPrice(double price);
    void setDriver(Driver* driver);

    std::string getMake() const;
    std::string getModel() const;
    Driver* getDriver() const;
    int getYear() const;
    double getPrice() const;

    void displayInfo() const;

private:
    void printPriceChange(double from, double to) const;

    std::string make;
    std::string model;
    Driver* driver = nullptr;
    Tire* tire = nullptr;
    int year;
    double price;
};
