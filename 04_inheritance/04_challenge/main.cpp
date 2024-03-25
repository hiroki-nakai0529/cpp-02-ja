#include "scene.hpp"
#include "square.hpp"
#include "circle.hpp"

int main(){
    Scene scene;
    Square square;
    Circle circle;

    scene.add(&square);
    scene.add(&circle);
    scene.render();
}
