#include "logger.hpp"

#include <iostream>

Logger::Logger(){}

void Logger::logMessage(std::string msg){
    std::cout << msg << std::endl;
}
