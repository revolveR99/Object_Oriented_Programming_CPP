#include "HumanB.hpp"   // Include the header file with the HumanB class declaration

// Constructor definition
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
    // Initializes a HumanB object with a given name and sets the weapon pointer to NULL.
    // _name is initialized with the provided name.
    // _weapon is initialized to NULL (which is equivalent to nullptr in modern C++).
    // This indicates that the HumanB object starts without a weapon.
}
HumanB::~HumanB() {
    // The destructor does not need to perform any specific actions here.
    // Since _weapon is a pointer and not dynamically allocated within the class,
    // there is no need to delete or clean up anything.
    // The default destructor will handle the cleanup of _name (std::string) and _weapon (pointer).
}

// Method to perform an attack
void HumanB::attack() const {
    if (_weapon != NULL) {
        // If _weapon is not NULL (i.e., a weapon is assigned), perform the attack.
        // Output the name of the HumanB and the type of weapon they are using.
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    } else {
        // If _weapon is NULL (i.e., no weapon is assigned), output a different message.
        std::cout << this->_name << " doesn't have a weapon to attack." << std::endl;
    }
}

// Method to set a weapon
void HumanB::setWeapon(const Weapon &weapon) {
    // Assign the address of the weapon object to the _weapon pointer.
    // Casting the address of the weapon to a Weapon* pointer.
    this->_weapon = (Weapon*)&weapon;
}
