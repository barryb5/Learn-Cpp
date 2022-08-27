#include <iostream>

int main (int argc, char **argv) {

    // ++i is important, empty {} means 0, size_t is the same as an unsigned int but is better cross platform
    for (size_t i {}; i < 10; ++i) {
        std::cout << i << " : Hello World" << std::endl;
    }

    std::cout << "Size of size_t : " << sizeof(size_t) << std::endl;

    //Can also leave out the itorator declaration if it's outside
    size_t iterator {0};
    for (; iterator < 10; ++iterator) {
        std::cout << iterator << " : No iterator declared" << std::endl;
    }

    // Hard coding is seen as bad practice
    const size_t COUNT{10};

    for (size_t iterator2{0}; iterator2 < COUNT; ++iterator2) {
        std::cout << iterator2 << " : No hard coding" << std::endl;
    }

    // While loop

    size_t iterator3{0};

    while (iterator3 < COUNT) {
        std::cout << iterator3 << " : This is a while loop" << std::endl;
        ++iterator3;
    }

    // Do while loop

    size_t iterator4 {11};

    do {
        std::cout << "[" << iterator4 << "] : Runs the body before the check" << std::endl;
        ++iterator4;
    } while (iterator4 < COUNT);


    
    return 0;
}