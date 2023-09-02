
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


/**
 * Other functions
*/
std::map<std::string, double> BitcoinExchange::loadExchangeRates(const std::string& filename) {
    std::map<std::string, double> bitcoinRates;
    std::ifstream file(filename);

    std::string line;
    std::getline(file, line);	// Skip header line
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string dateStr, valueStr;
        if (std::getline(ss, dateStr, ',') && std::getline(ss, valueStr)) {
            double rate = 0.0;
            std::istringstream valueStream(valueStr);

			// Can we extract a double value from the string?
            if (!(valueStream >> rate)) {
                std::cerr << "Error: not a valid rate." << std::endl;
                continue;
            }
            bitcoinRates[dateStr] = rate;
        }
    }
    return (bitcoinRates);
}

double BitcoinExchange::calculateBitcoinValue(const std::map<std::string, double>& exchangeRates, const std::string& date, double value) {
	// Find the iterator pointing to the first element that is not less than the given date, 
	// will either point to the exact date or the closest available date in the map.
	std::map<std::string, double>::const_iterator it = exchangeRates.lower_bound(date);
	std::cout << it->first << std::endl;

    // Check if there is no data available before the given date
    if (it == exchangeRates.begin()) {
        std::cerr << "Error: no data available before this date." << std::endl;
        exit(EXIT_FAILURE);
    }

    // No exact match for the date; use the closest available date
    if (it == exchangeRates.end()) {
        it--;
    } 
    // Date does not match exactly (i.e. exact date is not available), find the closest available date 
	else if (it->first != date) {
        std::map<std::string, double>::const_iterator prev = it;
        prev--;

        // Compare the difference between the input date and the two closest available dates
        if (std::abs(date.compare(prev->first)) < std::abs(date.compare(it->first))) {
            it = prev;
        }
    }

    return (value * it->second);
}
