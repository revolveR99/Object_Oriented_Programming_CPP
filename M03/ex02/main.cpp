#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	
	FragTrap	FragTrapA("FragTrapA");
	FragTrap	FragTrapB("FragTrapB");

	std::cout << std::endl;

	std::cout << FragTrapA << "\n" << FragTrapB << std::endl;

	FragTrapA.attack("FragTrapB");
	FragTrapB.takeDamage(FragTrapA.getAttackDamage());

	std::cout << std::endl;

	std::cout << FragTrapA << "\n" << FragTrapB << std::endl;

	FragTrapB.beRepaired(5);

	std::cout << std::endl;

	std::cout << FragTrapA << "\n" << FragTrapB << std::endl;

	FragTrapB.highFivesGuys();


	// FragTrapA.takeDamage(30);
    // FragTrapB.takeDamage(45);
   	// FragTrapA.beRepaired(60);
   

	std::cout << std::endl;

	return (0);
}
