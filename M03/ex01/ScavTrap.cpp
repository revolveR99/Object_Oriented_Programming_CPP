#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap()  // Calls ClapTrap default constructor
{
	std::cout << "Default SCAVTRAP constructor called" << std::endl;
}

// Parameterized constructor
ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)  // Calls ClapTrap constructor with name
{
	std::cout << "SCAVTRAP constructor called" << std::endl;
	setHitpoints(100);          // Set Hitpoints specific to ScavTrap
	setEnergyPoints(50);        // Set Energy Points specific to ScavTrap
	setAttackDamage(20);        // Set Attack Damage specific to ScavTrap
}

// Copy constructor
ScavTrap::ScavTrap(ScavTrap &scavTrap): ClapTrap(scavTrap) // Calls the copy constructor of CLap Trap (Base Constructor)
{
	std::cout << "SCAVTRAP copy constructor called" << std::endl;
	*this = scavTrap;  // Use assignment operator to copy attributes
}

// Destructor
ScavTrap::~ScavTrap()  // Destructor to clean up
{
	std::cout << "SCAVTRAP destructor called" << std::endl;
}

// Assignment operator overload
ScavTrap	&ScavTrap::operator=(ScavTrap &scavTrap)  // Assignment operator overload
{
	if (this != &scavTrap)  // Avoid self-assignment
	{
		std::cout << "SCAVTRAP assignation operator called" << std::endl;
		this->setName(scavTrap.getName());          // Copy name
		this->setHitpoints(scavTrap.getHitpoints());  // Copy hitpoints
		this->setEnergyPoints(scavTrap.getEnergyPoints());  // Copy energy points
		this->setAttackDamage(scavTrap.getAttackDamage());  // Copy attack damage
	}
	return (*this);  // Return the current object
}

// Overridden attack method specific to ScavTrap
void ScavTrap::attack(std::string const & target) 
{
	if (this->_Hitpoints <= 0 || this->_EnergyPoints <= 0) {
		std::cout << this->_Name << " died" << std::endl;
		return;
	}
	this->_EnergyPoints -= 1;
    std::cout << this->getName() << " has attacked " << target << ", " << "causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

// ScavTrap's special ability: guardGate
void ScavTrap::guardGate() 
{
	 if (this->_Hitpoints == 0) 
	 {
		std::cout << this->_Name << "ScavTrap can't guard gate because is dead" << std::endl;
		return;
	}
    std::cout  << this->getName() << " has entered in Gate keeper mode." << std::endl;
}
