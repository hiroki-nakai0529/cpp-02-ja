# pragma once

#include <iostream>
#include "drawable.hpp"

class Scene {
public:
    void add(Drawable* drawable);
    void const render();
private:
    std::vector<Drawable*> drawables;
};