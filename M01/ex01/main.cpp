#include "Zombie.hpp"  // Include the header file for the Zombie class

int main(void)
{
    int size = 5;  // Declare an integer variable named 'size' and set it to 5
    Zombie *zhorde;  // Declare a pointer to Zombie objects named 'zhorde'
    
    // Call the zombieHorde function to create a horde of 5 zombies named "abdelkhalek"
    // Store the returned pointer in 'zhorde'
    zhorde = zombieHorde(size, "Zombozo");
    
    // Loop through each zombie in the horde
    for (int i = 0; i < size; i++)
    {
        // Make each zombie announce itself
        zhorde[i].announce();
    }
    
    // After using the horde, free the allocated memory to avoid memory leaks
    delete[] zhorde;
    
    return 0;  // Return 0 to indicate that the program ended successfully
}
