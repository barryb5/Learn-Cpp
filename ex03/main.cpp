#include <iostream>
#include <string>
#include <iomanip>

int main(int argc, char **argv) {

    /**
     * Start variables with letter or underscore, no numbers for first letter
     * Seperate words with underscore
     * Case sensitive
     * General initialization method: typename variable_name {initialize_value};
     */

    // Assignment initialization
    int number1 = 15; // Decimal
    int number2 = 017; // Octal
    int number3 = 0x0f; // Hexadecimal
    int number4 = 0b00001111; // Binary

    // All equal 15
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "number4 : " << number4 << std::endl;

    // Compiler assigns garbage value
    int number5;

    // Initializes to zero
    int number6 {};

    // Initializes to 15 with the braced initialization
    int number7 {15};

    // Won't compile if line below wasn't commented out
    // int number8 {number2341 + number32490};

    // Won't compile will error
    // int number9 {2.9};

    // Information lost, functional initialization is less safe than braced initialization, will truncate to 2
    int number10 (2.9);

    // These modifiers only work for integral types
    // Signed modifier means the value can be positive or negative (-2^n-1 to 2^n-1 - 1) (-2.1b to 2.1b)
    signed int number11 {-15};

    // Unsigned modifier means the value can only be positive (0 to 2^n - 1) (0 to 4.2b)
    unsigned int number12 {15};

    // Short shortens size in memory to 2 bytes
    short int number13 {455};

    // Long lenghtens size in memory to 8 bytes
    long int number14 {429104};

    // Float takes 4 bytes, double takes 8 bytes, long double takes 11 bytes, double is reccomended default
    // Can also do scientific notation
    double number15 {1.924e-8};

    // n/0 = infinity, 0/0 = NaN

    // Boolean is still true or false, only take 1 byte
    bool updog = true;

    // Char holds only 1 character, 1 byte because only 0 - 127 ASCII codes
    char character1 {'a'};
    std::cout << "character1 : " << character1 << std::endl;

    // Can assign char to ASCII value
    char character2 {66};
    std::cout << "character2 : " << character2 << " value as an int : " << static_cast<int>(character2) << std::endl;

    // auto lets compiler guess the type, in this case it's a float 
    auto what_could_it_be = 1.5f;

    return 0;
}