#include "ScavTrap.hpp"

int	main()
{
	
	ScavTrap	ScavTrapA("ScavTrapA");
	ScavTrap	ScavTrapB("ScavTrapB");

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapA.attack("ScavTrapB");
	ScavTrapB.takeDamage(ScavTrapA.getAttackDamage());

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << ScavTrapA << "\n" << ScavTrapB << std::endl;

	ScavTrapB.guardGate();


	// ScavTrapA.takeDamage(30);
    // ScavTrapB.takeDamage(45);
   	// ScavTrapA.beRepaired(60);
    // ScavTrapA.guardGate();
    // ScavTrapB.guardGate();

	std::cout << std::endl;

	return (0);
}
