
#include "BitcoinExchange.hpp"


int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Invalid usage: ./btc <file>" << std::endl;
		return 1;
	}
	std::cout << argv[1] << std::endl;
	std::cout << std::endl;

	// system("leaks -q ex00");

	return 0;
}
