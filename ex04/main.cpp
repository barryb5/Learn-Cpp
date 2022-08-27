#include <iostream>

int main (int argc, char **argv) {
    int number1 {2};
    int number2 {7};

    // Addition
    int result = number1 + number2;
    std::cout << "Result (+) : " << result << std::endl;

    // Subtraction
    result = number2 - number1;
    std::cout << "Result (-) : " << result << std::endl;

    // Multiplication
    result = number1 * number2;
    std::cout << "Result (*) : " << result << std::endl;

    // Division
    result = number2 / number1;
    std::cout << "Result (/) : " << result << std::endl;

    // Modulus
    result = number2 % number1;
    std::cout << "Result (%) : " << result << std::endl;

    // Follows pemdas, then left to right

    // Postfix (if you put result++, it will print 1 then increment to 2)
    std::cout << "++Result : " << ++result << std::endl;

    std::cout << "Result-- : " << result-- << std::endl;
    std::cout << "Result (unchanged) : " << result << std::endl;

    std::cout << "Number 1 : " << number1 << std::endl;
    std::cout << "Number 2 : " << number2 << std::endl;

    // Makes bool appear as true/false instead of 1/0
    std::cout << std::boolalpha;

    // Compares to see if number2 is bigger than number1
    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;

    return 0;
}