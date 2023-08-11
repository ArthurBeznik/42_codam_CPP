
#include <RPN.hpp>

/**
 * Constructors - Destructors
*/
RPN::RPN(void) {
	
	std::cout << "[RPN] Default constructor called" << std::endl;
}

RPN::RPN(const RPN &copy) {
	
	std::cout << "[RPN] Copy constructor called" << std::endl;
	(void)copy;
}

RPN::~RPN(void) {
	
	std::cout << "[RPN] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
RPN	&RPN::operator = (const RPN &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/
RPN	*RPN::getVariable(void) const {

	return (this->);
	// return ();
}

/**
 * Other functions
*/

