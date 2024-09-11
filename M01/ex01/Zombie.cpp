#include "Zombie.hpp"  // This line includes the header file where the Zombie class is declared

// This is the implementation of the default constructor for the Zombie class
Zombie::Zombie()
{
    // This constructor does nothing special right now. It just creates a Zombie object with no specific initialization.
}

// This is the implementation of the destructor for the Zombie class
Zombie::~Zombie(void)
{
    // When a Zombie object is destroyed, this message will be printed showing the zombie's name and saying "died".
    std::cout << this->_name << " died" << std::endl;
}

// This function makes the Zombie announce itself
void Zombie::announce(void)
{
    // It prints out the zombie's name followed by "BraiiiiiiinnnzzzZ...", which is what zombies say in this context.
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// This function sets the name of the Zombie
void Zombie::setName(std::string name)
{
    // It updates the _name variable with the new name provided.
    this->_name = name;
}
