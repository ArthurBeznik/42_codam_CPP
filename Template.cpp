
#include <Template.hpp>

/**
 * Constructors - Destructors
*/
Template::Template(void) {
	
	std::cout << "[Template] Default constructor called" << std::endl;
}

Template::Template(const Template &copy) {
	
	std::cout << "[Template] Copy constructor called" << std::endl;
	(void)copy;
}

Template::~Template(void) {
	
	std::cout << "[Template] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Template	&Template::operator = (const Template &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/
Template	*Template::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/

