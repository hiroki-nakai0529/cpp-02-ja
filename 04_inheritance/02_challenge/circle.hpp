#include "shape.hpp"

class Circle : public Shape {
public:
    Circle(double radius) : m_radius(radius) {}
    double getArea() override;

private:
    double m_radius;
};