#include "Fixed.hpp"

// Default constructor initializes _RawBits to 0 and prints a message.
Fixed::Fixed() : _RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor initializes a new Fixed object as a copy of another Fixed object.
// It prints a message and then copies the raw bits from the existing object.
Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(f.getRawBits());
}

// Destructor cleans up resources when a Fixed object is destroyed and prints a message.
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Assignment operator assigns the raw bits from one Fixed object to another.
// It prints a message and then copies the raw bits.
Fixed &Fixed::operator=(const Fixed &f2)
{
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(f2.getRawBits());
    return (*this); // Returns the current object to allow chaining of assignment operations.
}

// Getter function returns the current value of _RawBits and prints a message.
//Returns the raw value of the fixed-point value.(SAME)
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_RawBits);
}

// Setter function sets the value of _RawBits to the provided value.
//That sets the raw value of the fixed-point number.(SAME)
void Fixed::setRawBits(int const raw)
{
    this->_RawBits = raw;
}

// getRawBits
// Usage: This function allows other parts of your code to see what the current value of _RawBits is, but it does not allow them to change it.
// When you want to check what value _RawBits currently holds, you use getRawBits.

// setRawBits
// Usage: This function allows you to update the internal state of the Fixed object by directly modifying _RawBits.
// When you need to set or change the value of _RawBits, you use setRawBits.
