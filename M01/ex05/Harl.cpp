#include "Harl.hpp"  // Includes the Harl class declaration

// Implementation of the debug method
void Harl::debug()
{
    // Prints a message indicating a complaint about a burger
    std::cout << "Expressing love for extra bacon in 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
}

// Implementation of the info method
void Harl::info()
{
    // Prints a message indicating disbelief about extra bacon cost
    std::cout << "Disbelief about extra bacon cost, not enough bacon in burger" << std::endl;
}

// Implementation of the warning method
void Harl::warning()
{    
    // Prints a message requesting free extra bacon as a long-time customer
    std::cout << "Request for free extra bacon, as a long-time customer" << std::endl;
}

// Implementation of the error method
void Harl::error()
{
    // Prints a message indicating an unacceptable situation and requesting to speak with the manager
    std::cout << "Unacceptable, request to speak with manager immediately" << std::endl;
}

// Implementation of the complain method
void Harl::complain(std::string level)
{
    // Array of pointers to member functions of Harl class
    void (Harl::*Function[4])() =
    {
        &Harl::debug,    // Pointer to debug method
        &Harl::info,     // Pointer to info method
        &Harl::warning,  // Pointer to warning method
        &Harl::error     // Pointer to error method
    };

    // Array of strings corresponding to complaint levels
    std::string levels[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    // Iterate through the levels array to find the matching level
    for (size_t i = 0; i < sizeof(levels) / sizeof(levels[0]); i++)
    {
        // If the input level matches the current level in the array
        if (levels[i] == level)
        {    
            // Call the corresponding member function using the pointer from the Function array
            (this->*Function[i])();
            return;  // Exit the function once the correct method has been called
        }
    }
}
