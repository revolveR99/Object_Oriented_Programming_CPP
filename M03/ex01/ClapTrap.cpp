#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _Name(), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    // Prints a message when the default constructor is called
    std::cout << "Default CLAPTRAP constructor called" << std::endl;
}

// Constructor with a Name parameter
ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hitpoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    // Prints a message when the parameterized constructor is called
    std::cout << "CLAPTRAP constructor called" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(ClapTrap &clapTrap)
{
    // Prints a message when the copy constructor is called
    std::cout << "CLAPTRAP copy constructor called" << std::endl;
    *this = clapTrap;  // Assign the passed object's values to the current object
}

// Destructor
ClapTrap::~ClapTrap()
{
    // Prints a message when the destructor is called
    std::cout << "CLAPTRAP destructor called" << std::endl;
}

// Getter for the _Name attribute
std::string &ClapTrap::getName()
{
    return _Name;
}

// Setter for the _Name attribute
void ClapTrap::setName(std::string &Name)
{
    _Name = Name;
	std::cout << "ClapTrap instance's Name set to: " << _Name << std::endl;
}

// Getter for the _Hitpoints attribute
int &ClapTrap::getHitpoints()
{
    return _Hitpoints;
}

// Setter for the _Hitpoints attribute
void ClapTrap::setHitpoints(int Hitpoints)
{
    _Hitpoints = Hitpoints;
	std::cout << getName() << "'s Hitpoints set to: " << _Hitpoints << std::endl;
}

// Getter for the _EnergyPoints attribute
int &ClapTrap::getEnergyPoints()
{
    return _EnergyPoints;
}

// Setter for the _EnergyPoints attribute
void ClapTrap::setEnergyPoints(int EnergyPoints)
{
    _EnergyPoints = EnergyPoints;
	 std::cout << getName() << "'s Energy Points set to: " << _EnergyPoints << std::endl;
}

// Getter for the _AttackDamage attribute
int &ClapTrap::getAttackDamage()
{
    return _AttackDamage;
	
}

// Setter for the _AttackDamage attribute
void ClapTrap::setAttackDamage(int AttackDamage)
{
    _AttackDamage = AttackDamage;
	std::cout << getName() << "'s Attack Damage set to: " << _AttackDamage << std::endl;
}

// Assignment operator overload
ClapTrap &ClapTrap::operator=(ClapTrap const &clapTrap2)
{
    // Ensure we're not assigning to the same object
    if (this != &clapTrap2)
    {
        // Prints a message when the assignment operator is called
        std::cout << "CLAPTRAP assignment operator called" << std::endl;
        // Copy all attributes from the other object
        this->_Name = clapTrap2._Name;
        this->_Hitpoints = clapTrap2._Hitpoints;
        this->_EnergyPoints = clapTrap2._EnergyPoints;
        this->_AttackDamage = clapTrap2._AttackDamage;
    }
    return *this;  // Return the current object
}

// Output stream operator overload for printing ClapTrap attributes
std::ostream &operator<<(std::ostream &stream, ClapTrap &clapTrap)
{
    // Print the ClapTrap's attributes to the stream
    stream << "Name: " << clapTrap.getName() << \
    " Hitpoints: " << clapTrap.getHitpoints() << \
    " Energy Points: " << clapTrap.getEnergyPoints() << \
    " Attack Damage: " << clapTrap.getAttackDamage();
    return stream;
}

// Method for ClapTrap to attack a target
void ClapTrap::attack(std::string const &target)
{
	if (this->_Hitpoints <= 0 || this->_EnergyPoints <= 0) {
		std::cout << this->_Name << " died" << std::endl;
		return;
	}
	// Reduce energy points by 1 for the attack
    this->_EnergyPoints--;
    // Print the attack action, including target and damage
    std::cout << this->getName() << " has attacked " << target << ", " \
    << "causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

// Method for ClapTrap to take damage
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hitpoints <= 0 || this->_EnergyPoints <= 0) {
		std::cout << this->_Name << " died" << std::endl;
		return;
	}
    // Decrease energy points by the amount of damage taken
    this->_Hitpoints -= amount;
    // Print the amount of damage taken
    std::cout << this->getName() << " has lost " \
    << amount << " healthpoints.. :-(" << std::endl;
}

// Method for ClapTrap to repair itself and recover health
void ClapTrap::beRepaired(unsigned int amount)
{
	 if (this->_Hitpoints <= 0 || this->_EnergyPoints <= 0) {
		std::cout << this->_Name << " died" << std::endl;
		return;
	}
     // Reduce energy points by 1 for the repair
    this->_EnergyPoints--;

    // Increase Hitpoints by the amount of repair
    this->_Hitpoints += amount;
    // Print the amount of health recovered
    std::cout << this->getName() << " has recovered " \
    << amount << " healthpoints. :-)" << std::endl;
}
