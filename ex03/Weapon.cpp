#include "Weapon.hpp"
#include "Weapon.hpp"   // Include the header file with the Weapon class declaration

// Constructor definition
Weapon::Weapon(std::string type) : _type(type) {
    // Initializes a Weapon object with a specified type.
    // The initialization list sets the _type member variable with the provided type argument.
}

// Destructor definition
Weapon::~Weapon() {
    // The destructor does not need to perform any specific actions in this case.
    // The Weapon class does not manage any dynamic memory or resources directly,
    // so the default destructor is sufficient for cleaning up.
}

// Method to get the type of the weapon
const std::string& Weapon::getType(void) {
    // Returns a const reference to the _type member variable.
    // The const reference ensures that the type cannot be modified through this method.
    return this->_type;
}

// Method to set a new type for the weapon
void Weapon::setType(std::string newone) {
    // Sets the _type member variable to the new type provided as an argument.
    this->_type = newone;
}

