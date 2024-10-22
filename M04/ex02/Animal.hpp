#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// Declaration of the Animal class, serving as a base class for other animals
class Animal {
	public:
		// Default constructor
		Animal(void);
		
		// Parameterized constructor accepting a string to set the animal type
		Animal(std::string const &type);
		
		// Copy constructor to initialize an object from another object of the same type
		Animal(Animal const &other);
		
		// Virtual destructor to allow derived classes to clean up properly
		virtual ~Animal(void);
		
		// Assignment operator overload to copy one object to another
		Animal &operator=(Animal const &other);
		
		// Getter function to retrieve the type of the animal
		std::string getType(void) const;
		
		// Pure virtual function for making a sound, to be implemented by derived classes
		virtual void	makeSound(void) const = 0;

	protected:
		// Protected member variable to hold the animal type, accessible to derived classes
		std::string _type;
};

#endif


// With Virtual Functions:
// By making makeSound() a virtual function, you allow C++ to figure out which version of 
// makeSound() to call based on the actual type of the object 
// (even if you're using a pointer or reference to the base class). This is called polymorphism.


// Protected vs. Private:
// Private:

// When a member is private, it can only be accessed within the class itself.
// No other class, even derived ones (subclasses), can access private members directly.
// Protected:

// When a member is protected, it can be accessed within the class itself and by any 
// class that inherits from it (derived classes).
// However, it is still not accessible from outside the class or its derived classes.
// Why protected for _type?
// In the context of your Animal class, _type is protected because:

// Inherited classes might need to access it directly: If you create derived classes such as Dog or Cat, 
// those classes may need to set or modify the _type variable to indicate what kind of animal they are.


// Polymorphism in C++ means using a single interface to represent different types of objects.
//  It allows one function or method to behave differently depending on the object it is acting upon.

// In simple terms, polymorphism lets you call the same function on different objects, 
// and each object will respond in its own way. For example, a base class Animal might 
// have a method makeSound(), and the derived classes like Dog and Cat will each have 
// their own version of makeSound() that behaves differently.
