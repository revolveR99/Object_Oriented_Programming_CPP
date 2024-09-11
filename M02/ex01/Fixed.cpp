#include "Fixed.hpp"

// Default constructor: Initializes the fixed-point value to 0.
Fixed::Fixed(void) : _fpvalue(0) { 
    std::cout << "Default constructor called"  << std::endl; 
}

// Integer constructor: Converts an integer to a fixed-point value.
// The integer is shifted left by the number of fractional bits (8) to convert it.
Fixed::Fixed(const int a)  { 
    std::cout << "Int constructor called"  << std::endl; 
    this->_fpvalue = a << Fixed::_nbfb; // Shift the integer to the left by 8 bits
}

// Float constructor: Converts a float to a fixed-point value.
// The float is multiplied by 2^8 and rounded to the nearest integer.
Fixed::Fixed(const float b)  { 
    std::cout << "Float constructor called"  << std::endl;
    this->_fpvalue = roundf(b * (1 << Fixed::_nbfb)); // Multiply by 2^8 and round
}

// Copy constructor: Initializes a new Fixed object as a copy of another Fixed object.
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Use the copy assignment operator to copy the data
}

// Copy assignment operator: Assigns the value of one Fixed object to another.
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Check for self-assignment
        _fpvalue = other.getRawBits(); // Copy the raw fixed-point value
    }
    return (*this); // Return the current object to allow chaining
}

// Destructor: Called when a Fixed object is destroyed.
Fixed::~Fixed(void) { 
    std::cout << "Destructor called" << std::endl; 
}

// Returns the raw fixed-point value stored in the object.
int Fixed::getRawBits(void) const {
    return (_fpvalue);
}

// Sets the raw fixed-point value to a specified value.
void Fixed::setRawBits(int const raw) {
    _fpvalue = raw;
}

// Converts the fixed-point value to a floating-point number.
float Fixed::toFloat(void) const {
    return (float)this->_fpvalue / (1 << Fixed::_nbfb); // Divide by 2^8 to convert back to float
}

// Converts the fixed-point value to an integer.
int Fixed::toInt(void) const {
    return this->_fpvalue >> Fixed::_nbfb; // Shift right by 8 bits to convert back to int
}

// Overloads the << operator to output the Fixed object as a float.
// This allows Fixed objects to be printed using cout and other output streams.
std::ostream &operator<<(std::ostream &os, const Fixed& i) {
    os << i.toFloat(); // Convert the fixed-point value to a float for display
    return os; // Return the output stream to allow chaining
}


// getRawBits
// Usage: This function allows other parts of your code to see what the current value of _RawBits is, but it does not allow them to change it.
// When you want to check what value _RawBits currently holds, you use getRawBits.

// setRawBits
// Usage: This function allows you to update the internal state of the Fixed object by directly modifying _RawBits.
// When you need to set or change the value of _RawBits, you use setRawBits.

