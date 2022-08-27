#include <iostream>

int main (int argc, char **argv) {

    int number {3};

    // Pointers store addresses of variables
    // Declare pointers with type then *
    // Will initialize to address of int number
    int* p_number{&number};

    // Can only store address of a double, initialized to nullptr
    double* p_fractional_number{nullptr};


    // All pointer variables are all the same size
    std::cout << "Size of pointer : " << sizeof(p_number) << std::endl;
    
    // What a pointer looks like
    std::cout << "p_number : " << p_number << std::endl;

    int number2 {34};

    p_number = &number2;

    // The address is different
    std::cout << "p_number : " << p_number << std::endl;

    // Can print the data the pointer points to
    std::cout << "p_number : " << *p_number << std::endl;



    return 0;
}