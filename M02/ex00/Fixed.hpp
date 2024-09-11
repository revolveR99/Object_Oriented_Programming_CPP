#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// The Fixed class is designed to handle fixed-point arithmetic.
// Fixed-point numbers are used to represent numbers with a fixed number of digits after the decimal point.
class Fixed
{
    private:
        // _RawBits stores the raw fixed-point value.
        int _RawBits;
        
        // _bits is a constant that defines the number of fractional bits.
        // It's used to manage the scaling of fixed-point numbers.
        static const int _bits = 8;

    public:
        // Default constructor: initializes a Fixed object with default values.
        Fixed();
        
        // Copy constructor: initializes a Fixed object as a copy of another Fixed object.
		//The copy constructor is used to create a new object as a copy of an existing object
        Fixed(const Fixed &f);
        
        // Destructor: cleans up any resources used by the Fixed object.
        ~Fixed();
        
        // Assignment operator: assigns the value of one Fixed object to another.
		//The assignment operator is used to copy the contents of one existing object to another existing object.
        Fixed &operator=(const Fixed &f2);

        //Returns the raw value of the fixed-point value
        int getRawBits(void) const;
        
        //That sets the raw value of the fixed-point number.
        void setRawBits(int const raw);
};

#endif




// ### 1. **Copy Constructor**

// - **What It Does**: The copy constructor is a special constructor used to create a new object as a copy of an existing object.
// - **When It’s Used**: 
//   - When you create a new object and want it to be an exact copy of an existing object.
//   - Example: `Fixed b(a);` means "create a new object `b` and make it a copy of `a`."
// - **Why It’s Needed**:
//   - To ensure that when you copy an object, all its internal data is copied correctly.
// #### Example in Real Life:
// - Imagine you have a book (`a`). The copy constructor is like making a photocopy of the entire book (`b`). Now you have two books with the exact same content.

// ### 2. **Assignment Operator**

// - **What It Does**: The assignment operator is used to copy the contents of one object to another **existing** object.
// - **When It’s Used**:
//   - When you have already created an object and you want to make it a copy of another object.
//   - Example: `c = b;` means "take the contents of `b` and copy them into `c`."
// - **Why It’s Needed**:
//   - To allow one object to be overwritten with the contents of another object, making them identical.
// #### Example in Real Life:
// - Imagine you have two notebooks, `c` and `b`. The assignment operator is like erasing everything in notebook `c` and copying everything from notebook `b` into `c`. Now both notebooks have the same content.

// ### **Key Differences**:
// - **Copy Constructor**: Used when you're creating a new object as a copy of an existing one (like making a duplicate book).
// - **Assignment Operator**: Used when you're copying data from one already existing object to another (like updating one notebook to match another).

// ### **Code Example to Clarify**:

// ```cpp
// Fixed a;       // Default constructor, creates a new object 'a'
// Fixed b(a);    // Copy constructor, creates a new object 'b' as a copy of 'a'
// Fixed c;       // Default constructor, creates a new object 'c'
// c = b;         // Assignment operator, copies the contents of 'b' into the existing object 'c'
// ```

// ### **Summary**:
// - **Copy Constructor**: Think of it as "making a new thing that’s just like another thing."
// - **Assignment Operator**: Think of it as "making one existing thing look like another existing thing." 


