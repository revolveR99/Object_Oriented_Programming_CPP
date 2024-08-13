#ifndef HUMANA_HPP_
# define HUMANA_HPP_

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
    public:
        HumanA(std::string name, Weapon &weapon); //* Constructor that initializes the name and the weapon
        ~HumanA(); // Destructor
        void attack() const; // Function to display the attack message const - cause this function won't alter anything inside class

    private:
        std::string _name; // Private attribute to store the name of the human
        Weapon &_weapon; // Reference to the weapon this human is using  Private member variable to store the weapon
};

#endif


// //when you pass an object to a function or constructor without using a reference or a pointer, 
// a copy of that object is made. This means:

// A new object is created in memory.
// This new object is a duplicate of the original object passed to the function or constructor.
// Any changes made to the copy do not affect the original object.



// Key Differences Between HumanA and HumanB
// HumanA: 
// Always Armed: HumanA is designed to always have a weapon. 
// The weapon is provided at the time of object creation (in the constructor), 
// and HumanA must be able to use it throughout its lifetime.
// Reference (Weapon &):
// A reference is perfect here because it guarantees that HumanA will always be 
// linked to a valid Weapon object. Once the reference is initialized, it cannot be 
// changed to refer to another weapon, nor can it be null.
// This aligns with the requirement that HumanA always has a weapon.

// HumanB:
// May or May Not Be Armed: HumanB is more flexible and may not have a weapon when it is created. 
// The weapon can be assigned later using a setWeapon() method, or it might not be set at all.
// Pointer (Weapon *):
// A pointer is suitable here because it allows HumanB to have no weapon initially 
// (the pointer can be null, nullptr in C++). This reflects the fact that HumanB 
// might not always be armed.
// The pointer can be reassigned to point to a different weapon later, or it can 
// remain null if HumanB never gets a weapon.
// The flexibility of a pointer allows HumanB to be in an "unarmed" state, which is 
// not possible with a reference (since a reference must always refer to a valid object).
