#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
    public:
        Weapon(std::string type); // Constructor to initialize the weapon with a type
		 ~Weapon(); //Deconstructor
        const std::string &getType(void); // Function to get the type of the weapon
        void setType(std::string newone); // Function to set the type of the weapon

    private:
        std::string _type; // Private attribute that stores the type of the weapon
};

#endif



