#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

// Define the WrongCat class, which inherits from WrongAnimal
class WrongCat : public WrongAnimal {
public:
    // Default constructor
    // Initializes a new WrongCat object
    WrongCat();

    // Copy constructor
    // Takes a constant reference to another WrongCat object and creates a copy of it
    WrongCat(WrongCat const &other);

    // Destructor
    // Cleans up the WrongCat object when it is destroyed
    ~WrongCat();

    // Copy assignment operator
    // Assigns the values from one WrongCat object to another
    WrongCat &operator=(WrongCat const &other);

    // Overridden makeSound function
    // Prints the sound that a WrongCat makes (specific to WrongCat class)
    void makeSound() const;
};

#endif
