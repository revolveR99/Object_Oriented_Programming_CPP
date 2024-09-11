#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream> // Include the iostream library to use input and output functions (like std::cout).

// Define the Zombie class
class Zombie
{
    private: //access specifiers
        std::string _name; // Private member variable to store the zombie's name.

    public: //access specifiers
        // Constructor: This function is called when a new Zombie object is created.
        // It takes a string parameter to set the zombie's name.
        Zombie(std::string name);

        // Destructor: This function is called when a Zombie object is destroyed.
        // It cleans up resources used by the object.
        ~Zombie(void);

        // Member function: This function prints the zombie's announcement.
        void announce(void);
};

// Function declarations outside of the class

// This function creates a Zombie object on the stack and makes it announce itself.
void randomChump(std::string name);

// This function creates a Zombie object on the heap and returns a pointer to it.
Zombie *newZombie(std::string name);

#endif
