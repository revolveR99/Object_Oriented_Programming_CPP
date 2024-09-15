#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;

    // Create ClapTrap objects on the stack
    ClapTrap ClaptrapA("ClaptrapA");  // Initialize ClaptrapA with name
    ClapTrap ClaptrapB("ClaptrapB");  // Initialize ClaptrapB with name 

	
    // Copy ClaptrapA into ClapTrapC using the copy constructor
    ClapTrap ClapTrapC(ClaptrapA);  // ClapTrapC is created as a copy of ClaptrapA
	std::cout << std::endl;
	std::cout << "ClapTrapC created as a copy of ClaptrapA\n";
	// std::string newNameA = "Claptrap_C";// Set new name for ClaptrapA
    // ClapTrapC.setName(newNameA); // Set new name for ClaptrapA
	std::cout << std::endl;
    
   
    std::cout << std::endl;

    // Display initial state of ClaptrapA and ClaptrapB using overloaded << operator
    std::cout << ClaptrapA << "\n" << ClaptrapB << "\n" << ClapTrapC << std::endl;

	std::cout << std::endl;

    // Set new values using setters (optional logic addition, if needed)	
    ClaptrapA.setAttackDamage(5);  // Set attack damage for ClaptrapA
    ClaptrapB.setHitpoints(6);     // Set hitpoints for ClaptrapB
    ClaptrapB.setEnergyPoints(1); // Set energy points for ClaptrapB

	std::cout << std::endl;

	// Display state after change
    std::cout << ClaptrapA << "\n" << ClaptrapB << "\n" << ClapTrapC << std::endl;

	std::cout << std::endl;

    // ClaptrapA attacks ClaptrapB
    ClaptrapA.attack("ClaptrapB");
    ClaptrapB.takeDamage(ClaptrapA.getAttackDamage());  // Apply damage to ClaptrapB

    std::cout << std::endl;

    // Display state after the attack
    std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

    // ClaptrapB repairs itself
    ClaptrapB.beRepaired(5);  // ClaptrapB recovers 5 hitpoints
ClaptrapB.beRepaired(5);
ClaptrapB.beRepaired(5);
    std::cout << std::endl;

	    // Display state after repair
    std::cout << ClaptrapA << "\n" << ClaptrapB << std::endl;

	std::cout << std::endl;

    return 0;  // No need to manually free memory as objects are created on the stack
}
