
#include <ScalarConverter.hpp>

/**
 * Constructors - Destructors
*/
ScalarConverter::ScalarConverter(void) {
	
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	
	std::cout << "Copy constructor called" << std::endl;
	(void)copy;
}

ScalarConverter::~ScalarConverter(void) {
	
	std::cout << "Destructor called" << std::endl;
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
 * Other functions
*/
int	ScalarConverter::convert(const std::string &str) {
	
	std::cout << str << std::endl;
	/* Check type of str */
	/* Convert str to actual type */
	/* Convert it explicitly to the 3 othe data types */
	/* Display results */
	/* Also handle conversion "errors" */
	return (0);
}

/**
 * ! Not needed for the subject ?
*/
ScalarConverter &ScalarConverter::getInstance(void) {
	
	static ScalarConverter	instance;
	return (instance);
}
