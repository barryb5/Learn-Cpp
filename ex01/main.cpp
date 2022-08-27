// Brings in the iostream library
#include <iostream>

// Returns 3 whenever get_value() is called
// Consteval means it runs when the program is compiled to produce a constant value every time, opposite of constexpr (compile time or run time and not always constant)
consteval int get_value() {
    return 3;
}

int main(int argc, char **argv) {
    std::cout << "Hello World" << std::endl;
    // Counts as a statement
    int value = get_value() + 3;
    std::cout << "Value : " << value << std::endl;
    return 0;
}