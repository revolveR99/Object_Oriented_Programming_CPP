#include "ClapTrap.hpp"

int main() {
    // Dynamically creating a ClapTrap object named "42"
    ClapTrap *a = new ClapTrap("42");

    // Dynamically creating another ClapTrap object named "42"
    ClapTrap *b = new ClapTrap("42");

    // Assigning object 'a' to 'b'. Now both pointers point to the same object (object 'a')
    b = a;

    // ClapTrap 'a' performs an attack on the target "1337"
    a->attack("1337");

    // ClapTrap 'a' takes 5 points of damage
    a->takeDamage(5);

    // ClapTrap 'a' repairs itself by 10 hit points
    a->beRepaired(10);

    // Since 'b' now points to 'a', 'b' also performs an attack on the target "1337"
    b->attack("1337");

    // Similarly, 'b' takes 5 points of damage (affects the same object as 'a')
    b->takeDamage(5);

    // 'b' repairs itself by 10 hit points (affects the same object as 'a')
    b->beRepaired(10);

    return 0;
}
