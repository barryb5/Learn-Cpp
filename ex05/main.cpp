#include <iostream>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(int argc, char **argv) {
    
    //Doesn't make new lines
    std::cout << "Hello";
    std::cout << "World";

    // Makes a new line
    std::cout << std::endl;
    
    // \n works aswell
    std::cout << "Hello World\n";

    // std::flush ensures that this line is sent to the stream immediately
    std::cout << "Flushed message" << std::endl << std::flush;
    
    // Justify which side text is on for the width
    std::cout << std::right;

    // Set fixed width for text
    std::cout << std::setw(10) << "Test" << std::endl;

    std::cout << std::setw(10) << "Test234" << std::endl;

    // fill empty setw space
    std::cout << std::setfill('-');

    std::cout << std::setw(10) << "Test234" << std::setw(20) << "Anothertest" << std::endl;

    // Makes bools appear as true/false 
    std::cout << std::boolalpha;

    bool condition = true;
    std::cout << condition << std::endl;

    // Makes bools appear as 1/0
    std::cout << std::noboolalpha;

    std::cout << condition << std::endl;

    //showpos and noshowpos shows and hides the + sign (negative sign is always shown)

    // showbase and noshowbase shows base for integral types
    std::cout << std::showbase;

    // uppercase and nouppercase does what you think

    // std::hex shows numbers in hex, same with std::dec, std::oct (does not work with decimals)
    std::cout << "47431 in hex : " << std::hex << 47431 << std::endl;

    // std::scientific and std::fixed (default scientific)
    std::cout << "Default : " << 1.34e-10 << std::endl;
    std::cout << std::fixed;
    std::cout << "Fixed : " << 1.34e-10 << std::endl;
    std::cout << std::scientific;
    std::cout << "Scientific : " << 1.34e-10 << std::endl;

    // setprecision() is number of digits for decimal, default is 6

    // showpoint and noshowpoint shows point and trailing zeros if necessary (noshowpoint is default)


    std::cout << std::noshowbase;
    // std::numeric_limits<type>::max() gives the max value of that type, change to min for minimum value
    std::cout << "Range of a short : " << std::dec << std::numeric_limits<short>::min() << " to " << std::dec << std::numeric_limits<short>::max() << std::endl;
    std::cout << "Range of a long : " << std::dec << std::numeric_limits<long>::min() << " to " << std::dec << std::numeric_limits<long>::max() << std::endl;
    std::cout << "Range of an int : " << std::dec << std::numeric_limits<int>::min() << " to " << std::dec << std::numeric_limits<int>::max() << std::endl;

    // std::floor(value) rounds down and std::ceil(value) rounds up
    std::cout << "Floor(7.7) : " << std::floor(7.7) << std::endl;
    std::cout << "Ceil(7.7) : " << std::ceil(7.7) << std::endl;

    // std::abs(value) give absolute value

    // std::exp(value) raises e to the power value
    std::cout << "e^10 : " << std::exp(10) << std::endl;

    // std::log(value) is log base e value, std::log10(value) is log base 10 value

    // std::sqrt(value) gets sqrt

    // std::round(value) rounds properly
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

    // There are also trig functions

    // Integral types less  than 4 bytes don't support math operators, for example char and short int

    






    return 0;
}