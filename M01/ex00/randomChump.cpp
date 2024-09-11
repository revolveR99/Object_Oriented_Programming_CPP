#include "Zombie.hpp" // Include the header file where the Zombie class is declared. This allows us to use the Zombie class in this file.

void randomChump(std::string name) // Define a function named randomChump that takes a string parameter called name.
{
    Zombie zombie3(name); // *Create a Zombie object named zombie3. The Zombie constructor is called with the name parameter to set the zombie's name.
    zombie3.announce();   // Call the announce method on the zombie3 object. This makes the zombie print its name and a message.
}


// Detailed Steps:
// 1.Specify the Class Type:
// Zombie tells the compiler that you are creating an object of the Zombie class.
// 2.Name the Object:
// zombie3 is the name of the new object. This name is used to refer to the object in your code.
// 3.Call the Constructor with Arguments:
// (name) calls the Zombie constructor and passes the argument name to it. The constructor is defined to take a std::string parameter and use it to initialize the private member _name.
