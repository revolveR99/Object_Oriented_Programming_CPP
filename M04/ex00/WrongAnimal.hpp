#ifndef WRONGANIMAL_HPP  
#define WRONGANIMAL_HPP

#include "Animal.hpp"
#include <iostream>     

// Define the WrongAnimal class, which inherits from Animal
class WrongAnimal : public Animal {
public:
    // Default constructor
    // Initializes a new WrongAnimal object
    WrongAnimal(void);

    // Copy constructor
    // Takes a constant reference to another WrongAnimal object and creates a copy of it
    WrongAnimal(WrongAnimal const &other);

    // Destructor
    // Cleans up the WrongAnimal object when it is destroyed
    ~WrongAnimal(void);

    // Copy assignment operator
    // Assigns the values from one WrongAnimal object to another
    WrongAnimal &operator=(WrongAnimal const &other);

    // Overridden makeSound function
    // Prints the sound that a WrongAnimal makes (specific to WrongAnimal class)
    void makeSound() const;
};

#endif
