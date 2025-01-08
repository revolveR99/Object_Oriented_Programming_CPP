#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
    try {
        Bureaucrat* ab = new Bureaucrat("ab", 150); // Lowest grade
        Bureaucrat* ac = new Bureaucrat("ac", 20);  // Medium grade
        Form* cd = new Form("cd", 30, 10);         // Requires grade 30 to sign, grade 10 to execute

        std::cout << std::endl << *cd << std::endl;

        // Test 1: Attempt to sign a form with a Bureaucrat of insufficient grade
        try {
            ab->signForm(*cd); // ab has grade 150, but cd requires grade 30 to sign
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << std::endl << *cd << std::endl;

        // Test 2: Sign the form with a Bureaucrat who meets the signing grade requirement
        try {
            cd->beSigned(*ac); // ac has grade 20, meets requirement of grade 30 to sign
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        std::cout << std::endl << *cd << std::endl;

        // Test 3: Attempt to sign the form again after it is already signed
        try {
            cd->beSigned(*ac); // Should not allow signing again (if implemented)
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        // Test 4: Create a Form with invalid grade requirements (too high or too low)
        try {
            Form invalidForm1("InvalidForm1", 0, 10); // Invalid signing grade (too high)
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }
        try {
            Form invalidForm2("InvalidForm2", 30, 151); // Invalid execution grade (too low)
        } catch (std::exception& e) {
            std::cout << e.what() << std::endl;
        }

        // Test 5: Print the details of a signed form
        std::cout << *cd << std::endl;

        // Cleanup
        delete ab;
        delete cd;
        delete ac;
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
