#ifndef __FIXED_HPP
#define __FIXED_HPP

#include <iostream>
#include <cmath>

// Fixed-point number class
class Fixed {
   public:
    // Default constructor
    Fixed(void);
    
    // Constructor from integer value
    Fixed(const int a);
    
    // Constructor from floating-point value
    Fixed(const float b);
    
    // Copy constructor
    Fixed(const Fixed& other);
    
    // Assignment operator
    Fixed &operator=(const Fixed &other);
    
    // Destructor
    ~Fixed(void);

    // Getter for the raw fixed-point value
    int getRawBits(void) const;
    
    // Setter for the raw fixed-point value
    void setRawBits(int const raw);
    
    // Convert fixed-point value to float
    float toFloat(void) const;
    
    // Convert fixed-point value to integer
    int toInt(void) const;
    
    // Comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;
    
    // Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    
    // Pre-increment operator
    Fixed& operator++();
    
    // Pre-decrement operator
    Fixed& operator--();
    
    // Post-increment operator
    Fixed operator++(int);
    
    // Post-decrement operator
    Fixed operator--(int);
    
    // Static methods to find the minimum of two Fixed objects
    static Fixed& min(Fixed& c, Fixed& d);
    static const Fixed& min(const Fixed& c, const Fixed& d);
    
    // Static methods to find the maximum of two Fixed objects
    static Fixed& max(Fixed& c, Fixed& d);
    static const Fixed& max(const Fixed& c, const Fixed& d);

   private:
    int             _fpvalue;  // Fixed-point value
    static const int _nbfb = 8; // Number of bits for fractional part
};

// Overload the << operator to output Fixed objects
std::ostream &operator<<(std::ostream &ostream, const Fixed& i);

#endif
