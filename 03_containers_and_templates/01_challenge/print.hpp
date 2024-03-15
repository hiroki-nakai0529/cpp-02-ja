#include <iostream>
#include <vector>
#include <list>

// テンプレート関数 print_elements
template<typename Container>
void print_elements(const Container& cont) {
    for (const auto& element : cont) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}