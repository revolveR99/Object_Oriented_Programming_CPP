#include "Fixed.hpp" // Include the header file that defines the Fixed class

int main( void ) {
    // Create a Fixed object 'a' using the default constructor.
    Fixed a;

    // Create a const Fixed object 'b' using the integer constructor.
    // The value '10' is converted to fixed-point format.
    Fixed const b( 10 );

    // Create a const Fixed object 'c' using the float constructor.
    // The value '42.42f' is converted to fixed-point format.
    Fixed const c( 42.42f );

    // Create a const Fixed object 'd' using the copy constructor.
    // 'd' is a copy of the fixed-point value stored in 'b'.
    Fixed const d( b );

    // Assign a new Fixed object (constructed from the float 1234.4321f) to 'a'.
    // This demonstrates the copy assignment operator.
    a = Fixed( 1234.4321f );

    // Output the fixed-point values of 'a', 'b', 'c', and 'd' as floats.
    std::cout << "a is " << a << std::endl; // Calls operator<<, outputs the float value of 'a'
    std::cout << "b is " << b << std::endl; // Outputs the float value of 'b'
    std::cout << "c is " << c << std::endl; // Outputs the float value of 'c'
    std::cout << "d is " << d << std::endl; // Outputs the float value of 'd'

    // Output the fixed-point values of 'a', 'b', 'c', and 'd' as integers.
    // Calls the toInt() method to convert the fixed-point value to an integer.
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    // Return 0 to indicate that the program finished successfully.
    return 0;
}
