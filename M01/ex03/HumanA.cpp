#include "HumanA.hpp"   // Include the header file that contains the HumanA class declaration

// Constructor definition
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
    // The constructor initializes a HumanA object with a name and a reference to a Weapon object.
    // The initialization list sets the member variables _name and _weapon with the provided arguments.
}
HumanA::~HumanA() {
    // The destructor does not need to perform any specific actions in this case.
    // This is because _weapon is a reference and is managed outside the class,
    // and _name is a string which does not require explicit cleanup.
    // The default destructor automatically handles the cleanup of these member variables.
}

// Method to perform an attack
void HumanA::attack() const {
    // This method outputs a message to the console indicating that HumanA is attacking with their weapon.
    // 'const' indicates that this method does not modify the state of the HumanA object.
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
    // 'this' pointer is used to access the member variables _name and _weapon of the current object.
    // _name provides the name of the HumanA.
    // _weapon.getType() calls the getType() method of the Weapon class to get the type of the weapon.
}
