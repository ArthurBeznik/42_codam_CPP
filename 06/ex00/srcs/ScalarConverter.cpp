
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
 * Getters - Setters
*/
// ! Not needed for the subject ?
ScalarConverter &ScalarConverter::getInstance(void) {
	
	static ScalarConverter	instance;
	return (instance);
}

/**
 * Other functions
*/
static void	tryAndCatch(const std::string str) {

	std::string::size_type sz;

	try {
		std::cout << "char: " << static_cast<char>(stoi(str, &sz)) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "int: " << stoi(str, &sz) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "float: " << stof(str, &sz) << "f" << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "double: " << stod(str, &sz) << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

static void	inputError(void) {

	std::cerr << "\nInput Error: must be of type char, int, float or double.\n" << std::endl;
	exit(EXIT_FAILURE);
}

static void	convertDisplayChar(const double c) {

	if (isprint(static_cast<char>(c))) {
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	} else {
		std::cout << "char: Non displayable" << std::endl;
	}
}

static void	convertDisplayInt(const double i) {

	if (i > INT_MAX || i < INT_MIN) {
		std::cout << "int: Non displayable" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	}
}

static void	convertInt(const long i) {

	if (i > INT_MAX || i < INT_MIN) {
		std::cerr << "Invalid integer" << std::endl;
		exit(EXIT_FAILURE);
	}
	convertDisplayChar(i);
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << std::fixed;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

static void	convertFloat(const double f) {

	if ((f > FLT_MAX || f < FLT_MIN) && !isinf(f)) {
		std::cerr << "Input error: Invalid float\n";
		exit(EXIT_FAILURE);
	}
	convertDisplayChar(f);
	convertDisplayInt(f);
	std::cout << std::showpoint;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

static void	convertDouble(const double d) {

	convertDisplayChar(d);
	convertDisplayInt(d);
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(d) << std::endl;
}

static void	displayNan(const std::string &str) {
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(std::stof(str)) << "f" << std::endl;
	std::cout << "double: " << static_cast<float>(stod(str)) << std::endl;
}

static void	displayInf(const std::string &str) {
	
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(stof(str)) << "f" << std::endl;
	std::cout << "double: " << static_cast<float>(stod(str)) << std::endl;
}

static void	displayChar(char c) {

	std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	ScalarConverter::convert(const std::string &str) {

	std::string::size_type	sz;
	long					intValue;
	double					doubleValue;

	/* Check for nan */
	if (!str.compare("nan") || !str.compare("nanf")) {
		displayNan(str);
	}

	/* Check for inf */
	else if (!str.compare("inf") || !str.compare("inff") || \
		!str.compare("+inf") || !str.compare("-inf") || \
		!str.compare("+inff") || !str.compare("-inff")) {
			displayInf(str);
	}

	/* Check for char */
	else if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0])) {
		displayChar(str[0]);
	}

	/* Check for int, float and double */
	else {
		try {
			intValue = stol(str, &sz);
		} catch (std::exception &e) {
			inputError();
		}
		if (str[sz] == '\0') {
			if (intValue == 0L && sz == 0)
				inputError();
			convertInt(intValue);
		} else {
			doubleValue = stod(str, &sz);
			if (str[sz] == 'f' && str[sz + 1] == '\0')
				convertFloat(doubleValue);
			else if (str[sz] == '\0')
				convertDouble(doubleValue);
			else
				inputError();
		}
	}

	std::cout << "\n\tVS\n" << std::endl;
	tryAndCatch(str);
}
