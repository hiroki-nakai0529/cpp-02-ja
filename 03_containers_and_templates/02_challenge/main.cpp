#include "stack.hpp"

int main() {
    std::cout << "Using std::vector:\n";
    Stack<int, std::vector> stack_vector;
    stack_vector.push(10);
    stack_vector.push(20);
    stack_vector.push(30);

    while (!stack_vector.is_empty()) {
        std::cout << "Top: " << stack_vector.top() << std::endl;
        stack_vector.pop();
    }

    std::cout << "\nUsing std::list:\n";
    Stack<std::string, std::list> stack_list;
    stack_list.push("One");
    stack_list.push("Two");
    stack_list.push("Three");

    while (!stack_list.is_empty()) {
        std::cout << "Top: " << stack_list.top() << std::endl;
        stack_list.pop();
    }

    std::cout << "\nUsing std::deque:\n";
    Stack<double, std::deque> stack_deque;
    stack_deque.push(1.1);
    stack_deque.push(2.2);
    stack_deque.push(3.3);

    while (!stack_deque.is_empty()) {
        std::cout << "Top: " << stack_deque.top() << std::endl;
        stack_deque.pop();
    }

    return 0;
}