#include "main.hpp"

// Constructor to initialize the phoneBook
PhoneBook::PhoneBook() {
    _number = 0; // Initially, there are no contacts in the phoneBook
}

// Method to add a new contact
int PhoneBook::add() {
    if (_number < 8) { // Check if there's space for a new contact
        if (_contacts[_number].fill(_number + 1) < 0) // Fill the contact details and check for errors (fill>>contact.cpp). +1 for index so index is start from 1 not 0
            return (-1); // If there's an error, return -1
        _number++; // Increment the number of contacts
    } else {
        std::cout << "Error! Memory is full." << std::endl; // If phoneBook is full, print an error message
    }
    return (0); // Return 0 on success
}

// Method to select and display a contact by index
int PhoneBook::select() {
    int flag; // Variable to check if the input is a valid digit
    char *index = new char[2]; // Allocate memory to store the index input (only 2 characters: one for digit and one for null-terminator)

    flag = 1; // Initialize flag to 1, assuming input is valid until proven otherwise
    std::cout << "Please select an index : ";std::cout << "Please select an index : "; // Ask the user to enter an index
    std::cin >> index; // Read the user's input and store it in 'index'
    if (std::cin.eof()) {// Check if the input stream has reached the end (EOF)
        delete []index; // If end of input Free the allocated memory for 'index', clean up and return -1  
        return (-1);
    }
    for (size_t i = 0 ; i < strlen(index) ; i++) { //loop through each char.
        if (isdigit(index[i]) == 0) // *Check if the input is a digit.
            flag = 0;// if not flag 0;
    }
    if (!flag || std::cin.fail() || atoi(index) > _number || atoi(index) <= 0) {
        // Check if:
        // - flag is 0 (indicating input was not a valid digit)
        // - std::cin.fail() indicates an input failure
        // - atoi(index) converts input to integer, and it's greater than the number of contacts or less than or equal to 0
        std::cout << "Error: Invalid index value." << std::endl; // Print an error message
        delete[] index; // Free the allocated memory for 'index'
        return (1); // Return 1 to indicate failure
    }
    // Convert the index to an integer, subtract 1 to adjust for zero-based indexing, and display the details of the selected contact
    _contacts[atoi(index) - 1].display_detail();
    delete[] index; // Free the allocated memory for 'index'
    return (0); // Return 0 to indicate success
}

// Method to display the phoneBook and select a contact
int PhoneBook::display_phonebook() {
    if (_number == 0) { //_number: This is a member variable that tracks how many contacts are currently stored in the phoneBook.
        std::cout << "Error: PhoneBook is empty." << std::endl; // If the phoneBook is empty, print an error message
    } else {
        std::cout << "│     INDEX│FIRST NAME│ LAST NAME│  NICKNAME│" << std::endl; // Print the header
        for (int i = 0 ; i < _number ; i++)
            _contacts[i].display_list(); // Display the list of contacts
        if (select() < 0)
            return (-1); // If selecting a contact fails, return -1
    }
    return (0); // Return 0 on success
}

/*
The isdigit function checks if the character is a digit (0-9)
Non-zero (true): If the character is a digit (i.e., '0' through '9').
Zero (false): If the character is not a digit.
*/

