#ifndef HUMANB_HPP_
# define HUMANB_HPP_

#include "Weapon.hpp"   // Include the Weapon class definition
#include <iostream>     // Include standard I/O stream
#include <string>       // Include string library

// Definition of the HumanB class
class HumanB {
    public:
        // Constructor that initializes a HumanB with a name
        HumanB(std::string name);
        
        // Destructor to clean up resources when a HumanB object is destroyed
        ~HumanB();
        
        // Public method to perform an attack, uses the weapon if available
		//const qualifier indicates that this method does not modify the HumanB object.
        void attack() const;
        
        // Public method to set the weapon for this HumanB object
        void setWeapon(const Weapon &weapon);
        
    private:
        std::string _name;   // Name of the HumanB object
        Weapon* _weapon;     // Pointer to a Weapon object
};

#endif
