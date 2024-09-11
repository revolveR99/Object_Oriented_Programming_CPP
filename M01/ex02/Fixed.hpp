#ifndef __FIXED_HPP  
#define __FIXED_HPP

#include <iostream>   
#include <typeinfo>   

class Fixed {
   public:
    // Default constructor
    // Initializes a Fixed object with default values
    Fixed(void);

    // Copy constructor
    // Initializes a Fixed object as a copy of another Fixed object
    Fixed(const Fixed &other);

    // Copy assignment operator
    // Assigns the value of one Fixed object to another
    Fixed &operator=(const Fixed &other);

    // Destructor
    // Cleans up when a Fixed object is destroyed
    ~Fixed(void);

    // Getter for the raw fixed-point value
    // This method is marked const because it does not modify the object
    int getRawBits(void) const;

    // Setter for the raw fixed-point value
    // The parameter is marked const to prevent modification of the input value
    void setRawBits(int const raw);

   private:
    int             _fpvalue;   // Private member variable to store the fixed-point value
    static const int _nbfb = 8; // Number of fractional bits for the fixed-point number, constant and shared across all instances
};

#endif // End header guard
