#include "Fixed.hpp"

// Entry point of the program
int main(void)
{
    // Default constructor is called to create an object 'a'.
    Fixed a;

    // Copy constructor is called to create an object 'b' as a copy of 'a'.
    Fixed b(a);

    // Default constructor is called to create an object 'c'.
    Fixed c;

    // Assignment operator is called to copy the value of 'b' into 'c'.
    c = b;

    // Output the raw bits of object 'a'.
    std::cout << a.getRawBits() << std::endl;

    // Output the raw bits of object 'b'.
    std::cout << b.getRawBits() << std::endl;

    // Output the raw bits of object 'c'.
    std::cout << c.getRawBits() << std::endl;

    return 0; // End of the program
}
