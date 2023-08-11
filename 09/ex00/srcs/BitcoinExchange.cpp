
#include <BitcoinExchange.hpp>

/**
 * Constructors - Destructors
*/
BitcoinExchange::BitcoinExchange(void) {
	
	std::cout << "[BitcoinExchange] Default constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) {
	
	std::cout << "[BitcoinExchange] Copy constructor called" << std::endl;
	(void)copy;
}

BitcoinExchange::~BitcoinExchange(void) {
	
	std::cout << "[BitcoinExchange] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
BitcoinExchange	&BitcoinExchange::operator = (const BitcoinExchange &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/
// BitcoinExchange	*BitcoinExchange::getVariable(void) const {

// 	return (this->);
// 	// return ();
// }

/**
 * Other functions
*/

