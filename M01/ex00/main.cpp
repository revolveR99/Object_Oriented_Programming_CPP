#include "Zombie.hpp" // Include the header file where the Zombie class is declared. This allows us to use the Zombie class and related functions.

int main(void) // Define the main function, which is the entry point of the program.
{
    Zombie zombie1("ab"); // Create a Zombie object named zombie1 on the stack with the name "ab".
    
    Zombie *zombie2 = newZombie("cd"); // Create a Zombie object on the heap with the name "cd" and get a pointer to it.
    zombie2->announce(); // Call the announce method on the zombie2 object to make it print its announcement.
    delete zombie2; //* Delete the zombie2 object to free the memory allocated on the heap.
    
    randomChump("ef"); // Call the randomChump function, which creates a Zombie object on the stack with the name "ef" and makes it announce itself.
    
    return 0; // Return 0 to indicate that the program ended successfully.
}

//Calling the Destructor
// The destructor is automatically called in different scenarios:

// Stack-Allocated Objects:

// When a Zombie object created on the stack (e.g., Zombie zombie1("ab");) 
// goes out of scope (e.g., when the function main ends), its destructor is automatically called.

// Heap-Allocated Objects:

// When you allocate an object on the heap using new, you need to manually call 
// delete to free the allocated memory and call the destructor.

//*delete Operator: Used to deallocate memory for 
//heap-allocated objects and automatically calls the destructor.


// Stack Allocation vs. Heap Allocation

// Stack Allocation:
// Automatic Memory Management: Objects allocated on the stack are automatically destroyed when they go out of scope. This means you don't have to manually manage their memory, making stack allocation less error-prone.
// Faster Allocation/Deallocation: Allocating and deallocating memory on the stack is generally faster because it simply involves moving the stack pointer up or down.
// Limited Size: The size of the stack is limited. If you allocate large objects on the stack or allocate too many objects, you might run into stack overflow issues.
// Lifetime Bound to Scope: Stack-allocated objects have a lifetime bound to the scope in which they were created. Once the scope ends (e.g., a function returns), the objects are automatically destroyed.

// Heap Allocation:
// Manual Memory Management: Objects allocated on the heap remain in memory until you explicitly delete them using delete. This gives you greater control over the lifetime of the object but also increases the risk of memory leaks if you forget to delete them.
// More Memory Available: The heap generally has much more memory available compared to the stack, so you can allocate larger objects or more objects.
// Slower Allocation/Deallocation: Allocating and deallocating memory on the heap is typically slower because it involves more complex operations than stack allocation.
// Lifetime Control: Objects on the heap are not tied to any specific scope. They can exist as long as you need them, across multiple function calls or even throughout the entire program's runtime.
