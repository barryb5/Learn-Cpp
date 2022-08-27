#include <iostream>

int main(int argc, char **argv) {

    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2);
    std::cout << std::boolalpha << "Result : " << result << std::endl;

    if (result) {
        std::cout << number1 << " is less than " << number2 << std::endl;
    } 
    if (!result) {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    if (result) {
        std::cout << number1 << " is less than " << number2 << std::endl;
    } else {
        std::cout << number1 << " is greater than " << number2 << std::endl;
    }

    if (number1 < number2) {
        std::cout << number1 << " is less than " << number2 << std::endl;
    } else {
        std::cout << number1 << " is greater than " << number2 << std::endl;
    }

    int number3 {23};

    // Switch statements are better than lots of else if statements because it's cleaner
    switch (number3) {

        // Conditions can only be integral types and enums 
        case 3: {
            std::cout << "Number3 is 3" << std::endl;
        }
        break;

        case 20: { 
            std::cout << "Number3 is 20" << std::endl;
        }
        break;

        case 23: {
            std::cout << "Number3 is 23" << std::endl;
        }
        break;

        default: {
            std::cout << "Number3 isn't 3, 20, or 23" << std::endl;
        }
    }

    // Ternary operators
    // result = (condition) ? option1 : option2;

    // Same as
    // if (condition) {result = option1;} else {result = option2;}

    std::string whatIsNumber3 = (number3 == 23) ? "Number3 is 23" : "Number3 is not 23";

    // Options must be the same type

    // Gets the bigger number of number1 and number2
    int max = (number1 > number2) ? number1 : number2;

    return 0;
}