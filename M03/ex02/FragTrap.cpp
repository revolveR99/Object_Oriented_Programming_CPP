#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FRAGTRAP constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name)
{
	std::cout << "FRAGTRAP constructor called" << std::endl;
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "FRAGTRAP copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap::~FragTrap()
{
	std::cout << "FRAGTRAP destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		std::cout << "FRAGTRAP assignation operator called" << std::endl;
		this->setName(fragTrap.getName());
		this->setHitpoints(fragTrap.getHitpoints());
		this->setEnergyPoints(fragTrap.getEnergyPoints());
		this->setAttackDamage(fragTrap.getAttackDamage());
	}
	return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << this->getName() << ": \"HIGH FIVES GUYS!\"" << std::endl;
}
