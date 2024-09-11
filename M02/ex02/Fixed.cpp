#include "Fixed.hpp"

// Default constructor: Initializes _fpvalue to 0
Fixed::Fixed(void) : _fpvalue(0) { }

// Constructor from integer value: Converts integer to fixed-point representation
Fixed::Fixed(const int a) { 
    this->_fpvalue = a << Fixed::_nbfb; // Shift left by number of fractional bits
}

// Constructor from floating-point value: Converts float to fixed-point representation
Fixed::Fixed(const float b) { 
    this->_fpvalue = roundf(b * (1 << Fixed::_nbfb)); // Convert float to fixed-point
}

// Copy constructor: Initializes from another Fixed object
Fixed::Fixed(const Fixed& other) {
    *this = other; // Use assignment operator
}

// Assignment operator: Assigns the value from another Fixed object
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        _fpvalue = other.getRawBits(); // Copy the raw fixed-point value
    }
    return (*this);
}

// Destructor: Default destructor, no special cleanup needed
Fixed::~Fixed(void) { }

// Comparison operators
bool Fixed::operator>(const Fixed& other) const {
    return this->_fpvalue > other._fpvalue; // Compare raw fixed-point values
}

bool Fixed::operator<(const Fixed& other) const {
    return other > *this; // Less than is the inverse of greater than
}

bool Fixed::operator>=(const Fixed& other) const {
    return !(other > *this); // Greater than or equal to is the inverse of less than
}

bool Fixed::operator<=(const Fixed& other) const {
    return !(*this > other); // Less than or equal to is the inverse of greater than
}

bool Fixed::operator==(const Fixed& other) const {
    return this->_fpvalue == other._fpvalue; // Equality check for raw fixed-point values
}

bool Fixed::operator!=(const Fixed& other) const {
    return !(this->_fpvalue == other._fpvalue); // Inequality is the inverse of equality
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed res;

    res._fpvalue = (this->_fpvalue + other._fpvalue); // Add raw fixed-point values
    return res;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed res;

    res._fpvalue = (this->_fpvalue - other._fpvalue); // Subtract raw fixed-point values
    return res;
}

Fixed Fixed::operator*(const Fixed& other) const {
    // Multiply the float representations and convert back to fixed-point
    Fixed res(this->toFloat() * other.toFloat());
    return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
    // Divide the float representations and convert back to fixed-point
    Fixed res(this->toFloat() / other.toFloat());
    return res;
}

// Pre-increment operator: Increments the fixed-point value and returns the object
Fixed& Fixed::operator++() {
    ++(this->_fpvalue); // Increment raw fixed-point value
    return (*this);
}

// Pre-decrement operator: Decrements the fixed-point value and returns the object
Fixed& Fixed::operator--() {
    --(this->_fpvalue); // Decrement raw fixed-point value
    return (*this);
}

// Post-increment operator: Returns the value before incrementing
Fixed Fixed::operator++(int) {
    Fixed prev(*this); // Store current value
    ++(this->_fpvalue); // Increment raw fixed-point value
    return prev; // Return the value before increment
}

// Post-decrement operator: Returns the value before decrementing
Fixed Fixed::operator--(int) {
    Fixed prev(*this); // Store current value
    --(this->_fpvalue); // Decrement raw fixed-point value
    return prev; // Return the value before decrement
}

// Static method to find the minimum of two Fixed objects (non-const versions)
Fixed& Fixed::min(Fixed& c, Fixed& d) {
    if (c < d) return c; // Return the smaller of the two
    return d;
}

// Static method to find the maximum of two Fixed objects (non-const versions)
Fixed& Fixed::max(Fixed& c, Fixed& d) {
    if (c > d) return c; // Return the larger of the two
    return d;
}

// Static method to find the minimum of two Fixed objects (const versions)
const Fixed& Fixed::min(const Fixed& c, const Fixed& d) {
    if (c < d) return c; // Return the smaller of the two
    return d;
}

// Static method to find the maximum of two Fixed objects (const versions)
const Fixed& Fixed::max(const Fixed& c, const Fixed& d) {
    if (c > d) return c; // Return the larger of the two
    return d;
}

// Getter for the raw fixed-point value
int Fixed::getRawBits(void) const {
    return (_fpvalue);
}

// Setter for the raw fixed-point value
void Fixed::setRawBits(int const raw) {
    _fpvalue = raw;
}

// Convert fixed-point value to float
float Fixed::toFloat(void) const {
    return (float)this->_fpvalue / (1 << Fixed::_nbfb); // Divide raw value by the scaling factor
}

// Convert fixed-point value to integer
int Fixed::toInt(void) const {
    return this->_fpvalue >> Fixed::_nbfb; // Shift right by number of fractional bits
}

// Overload the << operator to output Fixed objects
std::ostream &operator<<(std::ostream &os, const Fixed& i) {
    os << i.toFloat(); // Output the float representation of the Fixed object
    return os;
}

// getRawBits
// Usage: This function allows other parts of your code to see what the current value of _RawBits is, but it does not allow them to change it.
// When you want to check what value _RawBits currently holds, you use getRawBits.

// setRawBits
// Usage: This function allows you to update the internal state of the Fixed object by directly modifying _RawBits.
// When you need to set or change the value of _RawBits, you use setRawBits.
