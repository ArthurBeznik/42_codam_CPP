
#include <ScalarConverter.hpp>

/**
 * Constructors - Destructors
*/
ScalarConverter::ScalarConverter(void) {
	
	
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	
	(void)copy;
}

ScalarConverter::~ScalarConverter(void) {
	
	
}

/**
 * Operator overloads
*/
ScalarConverter	&ScalarConverter::operator = (const ScalarConverter &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/
// ScalarConverter	*ScalarConverter::getVariable(void) const {

// 	return (this->);
// 	// return ();
// }

/**
 * Other functions
*/
int	ScalarConverter::convert(const std::string &str) const {
	
	std::cout << str << std::endl;
	return (0);
}
