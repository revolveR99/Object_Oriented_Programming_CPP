#include "ClapTrap.hpp"

// Default constructor initializing default values for name, hit points, energy points, and attack damage
ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Parameterized constructor that initializes the ClapTrap's name and default values for hit points, energy points, and attack damage
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Parametrized constructor called" << std::endl;
}

// Copy constructor that creates a new ClapTrap by copying another ClapTrap's attributes
ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Use assignment operator to copy attributes from 'other' ClapTrap
}

// Destructor that gets called when a ClapTrap object is destroyed
ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

// Overloading assignment operator to copy the attributes of one ClapTrap object to another
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    // Check if it's not self-assignment
    if (this != &other) {
        // Copy all attributes from 'other' to 'this'
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this; // Return the current object reference
}

// Method for attacking another target, costs 1 energy point and prints out attack details
void ClapTrap::attack(const std::string &target) {
    // Check if ClapTrap is alive and has energy
    if (this->_hitPoints <= 0 || this->_energyPoints <= 0) {
        std::cout << this->_name << " died" << std::endl;
        return;
    }
    // Decrease energy points by 1 for attacking
    this->_energyPoints -= 1;
    // Print out attack message
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
}

// Method to handle taking damage, reduces hit points and checks if the ClapTrap dies
void ClapTrap::takeDamage(unsigned int amount) {
    // Check if ClapTrap is alive
    if (this->_hitPoints <= 0 || this->_energyPoints <= 0) {
        std::cout << this->_name << " died" << std::endl;
        return;
    }
    // Print the amount of damage taken
    std::cout << this->_name << " ClapTrap has taken " << amount << " points of damage" << std::endl;
    // Decrease hit points by the damage amount
    this->_hitPoints -= amount;
    // Check if ClapTrap's hit points are 0 or less and print a death message if so
    if (this->_hitPoints <= 0)
        std::cout << this->_name << " died" << std::endl;
}

// Method to repair the ClapTrap, increases hit points and consumes energy points
void ClapTrap::beRepaired(unsigned int amount) {
    // Check if ClapTrap is alive and has energy
    if (this->_hitPoints <= 0 || this->_energyPoints <= 0) {
        std::cout << this->_name << " died" << std::endl;
        return;
    }
    // Increase hit points by the repair amount
    this->_hitPoints += amount;
    // Decrease energy points by 1 for repairing
    this->_energyPoints -= 1;
    // Print out the repair message
    std::cout << this->_name << " ClapTrap has repaired " << amount << " hit points" << std::endl;
}
