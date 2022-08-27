#include <iostream>

int addNumbers(int first_number, int second_number) {

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int result = first_number + second_number;

    return result;
}

int main(int argc, char **argv) {

    int first_number {13}; // Statement
    int second_number {7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int sum = first_number + second_number;

    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(25, 7);

    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(30, 54) << std::endl;

    std::cout << "Sum : " << addNumbers(3, 42) << std::endl;

    // Error Message
    std::cerr << "This is an error message" << std::endl;

    // Log message
    std::clog << "This is a log message" << std::endl;

    std::string input;
    std::cout << "Write something here: ";
    // Gets user input, only first word with std::cin << input, so use this instead to get the full line
    std::getline(std::cin, input);

    std::cout << "You wrote: " << input << std::endl;

    return 0;
}