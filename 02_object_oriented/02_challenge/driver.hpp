#pragma once

#include <string>

class Driver {
public:
    Driver(std::string name, int age);
    std::string getDriverName();
private:
    std::string name;
    int age;
};
