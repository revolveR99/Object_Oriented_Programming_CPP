#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

// These lines make sure that the contents of this file are only included once by the compiler,
//  avoiding duplicate definitions that could cause errors.


class Contact // Define the Contact class
{
	public:
		Contact(); //Initializes a new Contact object
		int		fill(int index); // Method to fill the contact with information
		void	display_list(); // Method to display a brief list of the contact's information
		void	display_detail(); // Method to display the full details of the contact

	private:
		int				_index; //This variable holds the index number of the contact.
		std::string		_infos[5]; //array to store information about the contact (like name, phone number, etc.).
		std::string		_fields[5]; //This is another array holds the labels for each piece of information (like "Name", "Phone Number", etc.).
};

#endif


//**A class is a user-defined data type, which holds its own data members and member functions (ingredients & cooking steps)
