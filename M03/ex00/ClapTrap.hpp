#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
		// Private attributes
		std::string _name;        // ClapTrap's name
		int _hitPoints;           // Health points (default is 10)
		int _energyPoints;        // Energy points (default is 10)
		int _attackDamage;        // Attack damage (default is 0)
		
    public:
    	// Constructors and destructor
    	ClapTrap();                            // Default constructor
		ClapTrap(std::string name);            // Parameterized constructor
		ClapTrap(const ClapTrap& other);       // Copy constructor that creates a new ClapTrap object as a copy of another ClapTrap object.
		~ClapTrap();                           // Destructor

		// Assignment operator overload
		ClapTrap& operator=(const ClapTrap& other);

        // Public member functions
        void attack(const std::string& target);      // Function to attack a target
        void takeDamage(unsigned int amount);        // Function to take damage
        void beRepaired(unsigned int amount);        // Function to repair itself
};

#endif




// Assignment Operator Overload

// When you assign one object of ClapTrap to another (obj1 = obj2), 
// this operator ensures the correct copying of data from the other object to the current one. 
// It returns a reference to the current object.


// Private attributes (or member variables) of the ClapTrap class. 
// Private means they can only be accessed and modified by the class's own member functions, 
// not from outside the class.
