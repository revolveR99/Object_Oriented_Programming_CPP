#ifndef DOG_HPP  
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>    

// Define the Dog class, which inherits from Animal
class Dog : public Animal {
    public:
        // Default constructor
        // Initializes a new Dog object
        Dog(void);

        // Copy constructor
        // Takes a constant reference to another Dog object and creates a copy of it
        Dog(Dog const &other);

        // Destructor
        // Cleans up the Dog object when it is destroyed
        ~Dog(void);

        // Copy assignment operator
        // Assigns the values from one Dog object to another
        Dog &operator=(Dog const &other);

        // Overridden makeSound function
        // Prints the sound that a Dog makes (specific to Dog class)
        void makeSound() const;
};

#endif
