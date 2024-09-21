#ifndef CAT_HPP  
#define CAT_HPP

#include "Animal.hpp" 
#include <iostream>     

// Define the Cat class, which inherits from Animal
class Cat : public Animal {
    public:
        // Default constructor
        Cat(void);

        // Copy constructor
        // Takes a constant reference to another Cat object and copies its state
        Cat(Cat const &other);

        // Destructor
        // Cleans up the object when it goes out of scope
        ~Cat(void);

        // Copy assignment operator
        // Assigns the values from one Cat object to another
        Cat &operator=(Cat const &other);

        // Overridden makeSound function
        // Prints the sound that a Cat makes (specific to Cat class)
        void makeSound() const;
};

#endif  
