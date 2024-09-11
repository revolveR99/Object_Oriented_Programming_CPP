#include "main.hpp"  // Include the header file for declarations

// The main function where the program execution starts
int main(void)
{
    bool working;          // A boolean variable to control the main loop -flag to keep the loop running
    PhoneBook phonebook;   // An instance of the Phonebook class
    std::string command;   // A string to store user commands

    working = true;  // Initialize the working variable to true to start the loop

    // Main loop that continues until 'working' is false
    while (working)
    {
        // Prompt the user to enter a command
        std::cout << "Please enter a command. (ADD, SEARCH OR EXIT) : ";
        // Read the entire line of input from the user into the command string
        std::getline(std::cin, command); //*

        // Check if the end-of-file (EOF) has been reached, which means input stream is closed
        if (std::cin.eof())
            return (-1);  // Exit the program with an error code -1

        // If the user enters the command "ADD"
        if (!command.compare("ADD") && (phonebook.add()) < 0)
            break;  // Call the add method on the phonebook. If it returns a negative value, exit the loop

        // If the user enters the command "SEARCH"
        else if (!command.compare("SEARCH") && (phonebook.display_phonebook() < 0))
            break;  // Call the display_phonebook method on the phonebook. If it returns a negative value, exit the loop

        // If the user enters the command "EXIT"
        else if (!command.compare("EXIT"))
            working = false;  // Set working to false to exit the loop
    }

    return (0);  // Exit the program with a success code 0
}

/*
reads characters from the input stream until it encounters a newline character ('\n') 
std::cin: Specifies that the input should be read from the standard input (keyboard).
command: The string variable where the read line of text will be stored.
*/
