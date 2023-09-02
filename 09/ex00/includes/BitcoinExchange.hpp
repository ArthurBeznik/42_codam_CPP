
#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>
# include <cstdlib>
# include <cmath>

class BitcoinExchange {

    private:
        
        
    public:
        BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator = (const BitcoinExchange &op);
        ~BitcoinExchange(void);

		std::map<std::string, double> loadExchangeRates(const std::string& filename);
		double calculateBitcoinValue(const std::map<std::string, double>& exchangeRates, const std::string& date, double value);
};


#endif
