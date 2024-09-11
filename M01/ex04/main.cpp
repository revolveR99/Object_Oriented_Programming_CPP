#include <iostream>  // For input and output operations (std::cout, std::endl)
#include <fstream>   // For file operations (std::fstream)
#include <string>    // For string manipulations (std::string)

// This function performs the replacement of a substring `s1` with another 
// substring `s2` in a file and writes the result to a new file.
static void replace(std::string file, std::string s1, std::string s2) 
{
    std::fstream old_file;  // File stream for reading the original file
    std::fstream new_file;  // File stream for writing to the new file
    std::string line;       // Variable to store each line read from the file
    std::string aux;        // Auxiliary string used during replacement
    size_t find_value;      // Variable to store the position of the found substring

    // Open the original file in input mode
    old_file.open(file.c_str(), std::ios::in);
    // Open the new file in output mode, appending ".replace" to the original file name
    new_file.open(std::string(file + ".replace").c_str(), std::ios::out);
	
	//Error Handling

    // Check if the original file was successfully opened
    if (!old_file)
    {
        std::cout << "The input file could not be opened" << std::endl;
    } 
    // Check if the new file was successfully opened
    else if (!new_file) 
    {
        std::cout << "The output file could not be opened" << std::endl;
    } 
    else 
    {
        // Loop through each line of the original file
        while (getline(old_file, line)) 
        {
            int last = 0;  // Variable to track the last position after a replacement
            // Search for the substring `s1` within the current line
            while ((find_value = line.find(s1, last)) != std::string::npos) 
            {
                // Store the part of the line after the found substring
                aux = line.substr(find_value + s1.size());
                // Erase the part of the line after the found substring
                line.erase(find_value);
                // Append the replacement string `s2` and the remaining part of the line
                line += s2 + aux;
                //Updates the last position to continue searching after the newly inserted s2.
                last = find_value + s2.size();
            }
            // Write the modified line to the new file
            new_file << line;
            // If it's not the last line, add a newline character
            if (!old_file.eof())
                new_file << std::endl;
        }
    }
    // Close the original and new files
    old_file.close();
    new_file.close();
}

// The main function of the program
int main(int argc, char *argv[]) 
{
    // Check if the correct number of arguments (4) is passed
    if (argc == 4) 
    {
        // Check if the second or third arguments are empty strings
        if (!argv[2][0] || !argv[3][0])
            std::cout << "Strings can't be empty" << std::endl;
        else
            // Call the replace function with the file name, substring to replace, 
            // and the replacement substring
            replace(argv[1], argv[2], argv[3]);
    }
    else 
        // If the wrong number of arguments is passed, print an error message
        std::cout << "Wrong amount of arguments" << std::endl;

    // Return 0 to indicate successful completion
    return 0;
}
