#include "Harl.hpp"  // Includes the header file which contains the declaration of the Harl class

int main(void) {
    // Declare a variable to store the user input
    std::string in;
    
    // Create an instance of the Harl class
    Harl harl;

    // Prompt the user to enter a complaint level
    std::cout << "Enter a level: ";
    
    // Read the user input from the standard input (keyboard) and store it in the variable 'in'
    std::cin >> in;
    
    // Call the complain method of the Harl class with the user input
    // This will process the input and output the corresponding message
    harl.complain(in);

    // Return 0 to indicate that the program ended successfully
    return 0;
}
