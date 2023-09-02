
#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " input.txt" << std::endl;
        return (EXIT_FAILURE);
    }

    BitcoinExchange	bitcoinExchange;

    std::string	inputFilename = argv[1];
    std::map<std::string, double>	exchangeRates = bitcoinExchange.loadExchangeRates("data.csv");

    std::ifstream inputFile(inputFilename.c_str());
    if (!inputFile) {
        std::cerr << "Error: could not open " << inputFilename << std::endl;
        return (EXIT_FAILURE);
    }

    std::string	line;
    std::getline(inputFile, line);	// Skip header line
    while (std::getline(inputFile, line)) {
        std::istringstream	ss(line);
        std::string			date;
        double				value;

		// Split line on '|', store the date and extract double from the string
        if (std::getline(ss, date, '|') && ss >> value) {
            if (value < 0 || value > 1000) {
                std::cerr << "Error: value must be between 0 and 1000." << std::endl;
            } else {
                double bitcoinValue = bitcoinExchange.calculateBitcoinValue(exchangeRates, date, value);
                std::cout << date << " => " << value << " = " << bitcoinValue << std::endl;
            }
        } else {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
    return (EXIT_SUCCESS);
}
