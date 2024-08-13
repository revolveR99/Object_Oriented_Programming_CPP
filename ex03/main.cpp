#include "HumanA.hpp"  // Include the header file for HumanA class
#include "HumanB.hpp"  // Include the header file for HumanB class

int main()
{
    // First block
    {
        // Create a Weapon object with an initial type
        Weapon club = Weapon("crude spiked club");
        
        // Create a HumanA object named Bob and pass the Weapon object
        HumanA bob("Bob", club);
        
        // Bob performs an attack, using the weapon's initial type
        bob.attack();
        
        // Change the type of the Weapon object
        club.setType("some other type of club");
        
        // Bob performs another attack, using the updated weapon type
        bob.attack();
    }
    
    // Second block
    {
        // Create a Weapon object with an initial type
        Weapon club = Weapon("crude spiked club");
        
        // Create a HumanB object named Jim without an initial weapon
        HumanB jim("Jim");
        
        // Assign the Weapon object to Jim
        jim.setWeapon(club);
        
        // Jim performs an attack, using the weapon's type
        jim.attack();
        
        // Change the type of the Weapon object
        club.setType("some other type of club");
        
        // Jim performs another attack, using the updated weapon type
        jim.attack();
    }
    
    return 0;  // Return 0 to indicate successful execution
}
