
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

	std::string::size_type sz;
	
	// std::cout << str << std::endl; // ? testing
	
	/* Check type of str */
	checkType(str);

	/* Convert str to actual type */
	
	/* Convert it explicitly to the 3 other data types */
	char	strChar = static_cast<char>(str[0]);
	int		strInt = std::stoi(str, &sz);
	float	strFloat = std::stof(str, &sz);
	double	strDouble = std::stod(str, &sz);

	/* Display results */
	std::cout << "char: " << strChar << std::endl;
	std::cout << "int: " << strInt << std::endl;
	std::cout << "float: " << strFloat << "f" << std::endl;
	std::cout << "double: " << strDouble << std::endl;
	// std::cout << "char: ";
	// if (strInt < 0 || strInt > 127)
	// 	std::cout << "impossible" << std::endl;
	// else if (strInt < 32 || strInt > 126)
	// 	std::cout << "Non displayable" << std::endl;
	// else
	// 	std::cout << "'" << static_cast<char>(strInt) << "'" << std::endl;

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
