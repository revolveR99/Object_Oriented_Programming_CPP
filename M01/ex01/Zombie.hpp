#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// The #ifndef, #define, and #endif lines prevent this file from being included more than once in the same file.
#include <iostream>  // Includes input and output functions
#include <string>    // Includes the string class

// Define the Zombie class
class Zombie
{
    private:
        std::string _name;  // Private member variable to store the name of the zombie

    public:
        Zombie();           // Constructor to create a Zombie object
        ~Zombie(void);      // Destructor to clean up when a Zombie object is destroyed

        void announce(void); // Public function to make the zombie announce itself
        void setName(std::string name); // Public function to set the zombie's name
};

// Function prototype for creating a horde of zombies
// This function will create an array of N zombies with the same name
Zombie* zombieHorde(int N, std::string name);

#endif
