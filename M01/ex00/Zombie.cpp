#include "Zombie.hpp" // Include the header file that contains the class declaration and function prototypes.
#include <iomanip>    // Include this header if needed for formatting, though it's not used in this snippet.

// Constructor definition
Zombie::Zombie(std::string name) // Define the constructor for the Zombie class
{
    this->_name = name; // Initialize the private member variable `_name` with the value of the `name` parameter.
    // `this` is a pointer to the current object, and `_name` is a member variable of the Zombie class.
}

// Destructor definition
Zombie::~Zombie() // Define the destructor for the Zombie class
{
    // Print a message to the console indicating that this Zombie object is being destroyed.
    // This message includes the name of the Zombie.
    std::cout << this->_name << ": destroyed" << std::endl;
    // `this` is used to access the `_name` member variable of the Zombie object being destroyed.
}

// Member function definition
void Zombie::announce(void) // Define the member function `announce` for the Zombie class
{
    // Print an announcement message to the console. This message simulates a zombie's moaning sound.
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
    // `this` is used to access the `_name` member variable, which is printed alongside the moaning sound.
}
