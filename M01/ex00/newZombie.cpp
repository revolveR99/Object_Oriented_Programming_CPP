#include "Zombie.hpp" // Include the header file where the Zombie class is declared.

Zombie* newZombie(std::string name) // Define the function `newZombie` which returns a pointer to a Zombie object.
{
    return (new Zombie(name)); // *Create a new Zombie object on the heap and return a pointer to it.
}

/*new Zombie(name): This part creates a new Zombie object on the heap.
new is an operator used to allocate memory on the heap for a new object.
Zombie(name) calls the constructor of the Zombie class, initializing the object's _name member with the value provided by name.*/

// Purpose: The newZombie function dynamically allocates memory for a new Zombie object on the heap, 
// initializes it with the provided name, and returns a pointer to this Zombie object.
// Usage: This function is useful when you need to create Zombie objects 
// that should outlive the scope of the function that created them. 
// Since the object is allocated on the heap, it will persist 
// until explicitly deallocated using delete.


// Why Use a Pointer?
// Dynamic Memory Allocation:

// When you create an object using the new keyword, the memory for that object is allocated on the heap. The heap is a region of memory where you can allocate and deallocate memory manually.
// Objects on the heap persist until you explicitly delete them, unlike stack-allocated objects, which are automatically destroyed when they go out of scope.
// Returning the Object:

// When a function creates an object on the stack, that object is destroyed when the function exits. However, if you create an object on the heap, it persists after the function returns. To access this heap-allocated object, you need a pointer to refer to it.
// By returning a pointer, the newZombie function allows the caller to use the Zombie object even after the function has finished executing.
