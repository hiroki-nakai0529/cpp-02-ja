#include "traffic_light.h"

int main() {
    TrafficLight light = TrafficLight::red;
    std::cout << "Traffic Light Action: " << get_action(light) << std::endl;
    return 0;
}