#include "Brain.hpp"

// Default constructor
// Prints a message when a Brain object is created using the default constructor
Brain::Brain() {
	std::cout << "Brain: default constructor called" << std::endl;
}

// Destructor
// Prints a message when a Brain object is destroyed
Brain::~Brain() {
	std::cout << "Brain: destructor called" << std::endl;
}

// Copy constructor
// Prints a message when a Brain object is created as a copy of another Brain object
// Uses the assignment operator to copy data from the other Brain object
Brain::Brain(const Brain &other) {
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = other;
}

// Assignment operator
// Prints a message when one Brain object is assigned to another
// Checks for self-assignment and then copies the contents of the _ideas array from the other Brain object
Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain: asignation operator called" << std::endl;
	if (this != &other) {
		// Copy each element of the _ideas array from the other Brain object
		for (int i = 0; i < 100 ; ++i) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	// Return the current object to allow chained assignment
	return *this;
	//summary, returning the current object allows assignment operations to be chained together smoothly.
}
