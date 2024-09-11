#include "Zombie.hpp"  // Include the header file for the Zombie class

// This function creates an array (or horde) of zombies
// It takes two arguments: the number of zombies (N) and the name for each zombie
Zombie* zombieHorde(int N, std::string name)
{
    // Check if the number of zombies (N) is less than or equal to 0
    // If so, we cannot create a horde, so return NULL
    if (N <= 0)
        return NULL;

    // Create an array of N Zombie objects using dynamic memory allocation
    // The new keyword allocates memory for N zombies on the heap
    Zombie* Zombiehorde = new Zombie[N];

    // Loop through each zombie in the array
    for (int i = 0; i < N; i++) {
        // Set the name of each zombie to the provided name
        Zombiehorde[i].setName(name);
    }

    // Return the pointer to the first zombie in the array
    // This pointer represents the entire horde of zombies
    return Zombiehorde;
}

//* The new Operator
// The new operator is used to allocate memory on the heap. 
// The heap is a region of your computer's memory that is used for dynamic allocation. 
// When you use new, it allocates the requested memory and returns a pointer to that memory.
