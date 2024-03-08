#include "tire.hpp"

#include <iostream>

Tire::Tire(int size, int type) : size(size), type(type) {
    if (size < 0) {
        std::cerr << "Negative Size!" << "\n";
    }
}