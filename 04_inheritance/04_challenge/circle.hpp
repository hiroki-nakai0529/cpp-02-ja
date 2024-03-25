# pragma once

#include <iostream>
#include "drawable.hpp"


class Circle : public Drawable {
public:
    void const draw() override;
};