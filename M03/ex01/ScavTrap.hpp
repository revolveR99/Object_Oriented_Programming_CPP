#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	ScavTrap: public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(const std::string	&Name);
		ScavTrap(ScavTrap &scavTrap);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap &clapTrap);

		void	attack(std::string const & target);
		void	guardGate(void); //will display a message informing that ScavTrap is now in Gate keeper mode
};

#endif
