#include "print.hpp"

int main() {
    // std::vectorでテスト
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector elements: ";
    print_elements(vec);

    // std::listでテスト
    std::list<std::string> strList = {"one", "two", "three"};
    std::cout << "List elements: ";
    print_elements(strList);

    return 0;
}