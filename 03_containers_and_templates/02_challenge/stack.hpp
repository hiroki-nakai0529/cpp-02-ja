#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stdexcept>

template <typename T, template <typename...> class Container = std::vector>
class Stack {
private:
    Container<T> elements;

public:
    void push(const T& value) {
        elements.push_back(value);
    }

    void pop() {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        elements.pop_back();
    }

    T top() const {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::top(): empty stack");
        }
        return elements.back();
    }

    bool is_empty() const {
        return elements.empty();
    }
};