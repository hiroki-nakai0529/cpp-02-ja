#include "dog.hpp"

int main(){
    Dog dog;
    std::unique_ptr<Animal> derived_animal = std::make_unique<Dog>();
    dog.makeSound();
    derived_animal->makeSound();
    Animal animal;
    animal.makeSound();
    return 0;
}