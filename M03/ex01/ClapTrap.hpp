#ifndef CLAPTRAP_HPP  // Include guard to prevent multiple inclusions of this header file
# define CLAPTRAP_HPP

# include <iostream>  // For standard input/output operations
# include <string>    // For the std::string class

// Definition of the ClapTrap class
class ClapTrap
{
	protected:
		// Protected member variables
		std::string _Name;         // Name of the ClapTrap
		int _Hitpoints;            // Amount of hitpoints (health)
		int _EnergyPoints;         // Amount of energy points (used for actions)
		int _AttackDamage;         // Damage caused by attacks
	
	public:
		// Constructors and Destructor
		ClapTrap();                           // Default constructor
		ClapTrap(std::string Name);           // Constructor with a name parameter
		ClapTrap(ClapTrap &clapTrap);         // Copy constructor
		~ClapTrap();                          // Destructor

		// Getters and Setters for member variables
		std::string			&getName();             // Getter for _Name
		void				setName(std::string &Name); // Setter for _Name
		int					&getHitpoints();         // Getter for _Hitpoints
		void				setHitpoints(int Hitpoints); // Setter for _Hitpoints
		int					&getEnergyPoints();      // Getter for _EnergyPoints
		void				setEnergyPoints(int EnergyPoints); // Setter for _EnergyPoints
		int					&getAttackDamage();      // Getter for _AttackDamage
		void				setAttackDamage(int AttackDamage); // Setter for _AttackDamage

		// Overload the assignment operator
		ClapTrap &operator=(ClapTrap const &clapTrap2);

		// Member functions
		virtual void attack(std::string const &target);   // Function for attacking a target
		void takeDamage(unsigned int amount);     // Function for taking damage
		void beRepaired(unsigned int amount);     // Function for repairing and recovering health
};

// Overload the << operator to print ClapTrap's attributes
std::ostream &operator<<(std::ostream &stream, ClapTrap &clapTrap2);

#endif  // End of include guard
