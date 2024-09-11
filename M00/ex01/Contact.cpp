#include "main.hpp"

// Constructor for the Contact class
Contact::Contact()
{
    // Initialize all elements of the _infos array with empty strings
    for (int i = 1 ; i < 5 ; i++)
        _infos[i] = std::string(); // Sets _infos[i] to an empty string for indices 1 through 4
    
    // Initialize the _fields array with labels for each type of contact information
    _fields[0] = "First name";
    _fields[1] = "Last name";
    _fields[2] = "Nickname";
    _fields[3] = "Phone number";
    _fields[4] = "Darkest secret";
}

// Method to fill in contact information
int Contact::fill(int index)//user defined both contact and d_l
{
    _index = index; // Store the index of the contact
    
    // Loop through each field
    for (int i = 0 ; i < 5 ; i++)
    {
        // Loop until the user provides a non-empty input for each field
        while (_infos[i].size() == 0)
        {
            std::cout << _fields[i] << " : "; // Prompt the user for input
            std::getline(std::cin, _infos[i]); //*Store user input into _infos[i]
            
            // Check if the end-of-file (EOF) was encountered
            if (std::cin.eof())
                return (-1); // Return -1 to indicate an error or EOF

            // Check if the input is empty
            if (_infos[i].size() == 0)
                std::cout << "Error! Invalid value" << std::endl; // Notify the user of the error
        }
    }
    return (0); // Return 0 to indicate success
}

// Method to display a brief summary of the contact in a list
void Contact::display_list() //user defined both contact and d_l
{
    // Print the index of the contact /std::cout - print text to the console with certain witdh(_index&10)
    std::cout << "│" << std::setw(10) << _index;
    
    // Loop through the first three (because of small terminal) fields (e.g., First name, Last name, Nickname)
    for (int i = 0 ; i < 3 ; i++)
    {
        // Check if the length of the field's content is less than 10 characters
        if (_infos[i].size() < 10)
            std::cout << "│" << std::setw(10) << _infos[i]; // Print the content right-aligned within a width of 10 characters
        else
            std::cout << "│" << _infos[i].substr(0, 9) << "."; // Truncate content to 9 characters and add "." if it's too long
    }
    std::cout << "│" << std::endl; // End the row of the list
}

// Method to display detailed information about the contact
void Contact::display_detail()
{
    // Loop through all fields and print their labels and corresponding values
    for (int i = 0 ; i < 5 ; i++)
        std::cout << _fields[i] << " : " << _infos[i] << std::endl; // Print each field's label and its content
}
//** std::cin, you are telling the program to wait for the user to type something and press Enter.
/*std::getline is a function provided by the C++ Standard Library that reads a line of text from an input stream and stores it in a string. The function has the following signature:
std::getline(std::istream& is, std::string& str);
is: The input stream to read from (in this case, std::cin).
str: The string where the input will be stored.*/
