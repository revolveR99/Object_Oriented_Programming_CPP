#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class	FragTrap: public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(const std::string	&Name);
		FragTrap(FragTrap &fragTrap);
		~FragTrap();
		FragTrap	&operator=(FragTrap &fragTrap2);

		void	highFivesGuys(void);
};

#endif
