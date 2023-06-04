
#include <Intern.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <ShrubberyCreationForm.hpp>

/**
 * Constructors - Destructors
*/
Intern::Intern(void) {
	
	
}

Intern::Intern(const Intern &copy) {
	
	(void)copy;
}

Intern::~Intern(void) {
	
	
}

/**
 * Operator overloads
*/
Intern	&Intern::operator = (const Intern &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/

/**
 * Other functions
*/
AForm    *Intern::makePresidentialForm(const std::string &target) {

	return (new PresidentialPardonForm(target));
}

AForm    *Intern::makeShrubberyForm(const std::string &target) {

	return (new ShrubberyCreationForm(target));
}

AForm    *Intern::makeRobotomyForm(const std::string &target) {

	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makeForm(const std::string &form, const std::string &target) {

	std::string formLower = form.c_str();
	for (int i = 0; i < TABLE_SIZE; i++) {
		if (formTable[i].key == formLower) {
			std::cout << "Intern creates " << formLower << " form" << std::endl;
			return (this->*(formTable[i].func))(target);
		}
	}
	// std::cout << "Unknown form name: " << form << std::endl;
	throw Intern::InvalidFormNameException();
	return (NULL);
}
