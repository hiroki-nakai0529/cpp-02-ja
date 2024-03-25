# pragma once

#include <iostream>
#include "animal.hpp"


class Dog : public Animal {
public:
    void const makeSound() override;
};