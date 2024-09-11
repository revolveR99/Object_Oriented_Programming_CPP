#ifndef __FIXED_HPP
#define __FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
   public:
    // Default Constructor: Initializes a new Fixed object with default settings.
    Fixed(void);

    // Constructor: Initializes a new Fixed object using an integer value.
    Fixed(const int a);

    // Constructor: Initializes a new Fixed object using a floating-point value.
    Fixed(const float b);

    // Copy Constructor: Creates a new Fixed object by copying another.
    Fixed(const Fixed& other);

    // Copy Assignment Operator: Assigns the value of one Fixed object to another.
    Fixed &operator=(const Fixed &other);

    // Destructor: Called when the Fixed object is destroyed.
    ~Fixed(void);

    // Getter: Returns the raw value of the fixed-point number.
    int getRawBits(void) const;

    // Setter: Sets the raw value of the fixed-point number.
    void setRawBits(int const raw);

    // Converts the fixed-point value to a floating-point value.
    float toFloat(void) const;

    // Converts the fixed-point value to an integer value.
    int toInt(void) const;

   private:
    // Member variable to store the fixed-point value.
    int _fpvalue;

    // Static constant to represent the number of fractional bits.
    // This value is shared by all instances of the Fixed class.
    static const int _nbfb = 8;
};

// Overload of the insertion (<<) operator to allow easy output of Fixed objects.
// This function allows us to output a Fixed object directly using std::ostream.
std::ostream &operator<<(std::ostream &ostream, const Fixed& i);

#endif

// Why Do We Need This?
// In C++, the << operator is commonly used for outputting data to streams, 
// such as the console or files. 
// However, by default, C++ does not know how to output custom types (like your Fixed class) 
// using this operator. To make it possible, we need to define a 
// function that tells the compiler what it means to use << with a Fixed object.
// Without this operator overloading, the code above would not work, because std::cout 
// wouldn't know how to handle an object of type Fixed.
