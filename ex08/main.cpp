#include <iostream>

int main (int argc, char **argv) {

    // Don't try to read or write data outside array

    // Array can be initialized at declaration, not all values have to be initialized
    int scores[10] {3, 5, 1, 23, 4, 42, 461, 654, 6}; // Only initializes first 9

    // scores[9] will be initialized to 0

    // Writes data to the array
    for (size_t i{0}; i < 10; ++i) {
        scores[i] = i * 3;
    }

    // Prints the array
    for (size_t i{0}; i < 10; ++i) {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    // Constant arrays can't be manipulated, only store elements of the same type

    // Can omit the size of the array

    int values[] {32, 4, 4, 64, 62, 134, 2341};

    // Loop through ommited array size with range array
    for (auto value : values) {
        std::cout << "Value : " << value << std::endl;
    }

    std::cout << "Size of values : " << std::size(values) << std::endl;

    // Can also loop through with use of std::size()
    for (size_t i{0}; i < std::size(values); ++i) {
        std::cout << "Value : " << values[i] << std::endl;
    }

    // Find array size with sizeof
    size_t size {sizeof(scores) / sizeof(scores[0])};
    std::cout << "Size of values : " << size << std::endl;

    // Array of chars can be directly printed, the \0 is a null termination letter which tells where the end of the array is
    char message[] {'H', 'e', 'l', 'l', 'o', '\0'};
    // Null termination letter is automatically added here
    char other_message[] {"Hello"};

    // This will only work with chars otherwise will give location in memory
    std::cout << "Message : " << message << std::endl;

    std::cout << "Size : " << std::size(message) << std::endl;
    std::cout << "Other message : " << other_message << std::endl;

    // Trying to read data out of bounds of the array will either crash or read garbage
    // Trying to write data out of bounds will be written but may be overwritten or corrupt data used by other parts of the program

    return 0;
}