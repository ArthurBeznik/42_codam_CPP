
#include <ScalarConverter.hpp>

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Error\n\tUsage: ./convert <string_literal>" << std::endl;
		return (1);
	}
	std::cout << "Input: " << argv[1] << "\n" << std::endl; // ? testing
	ScalarConverter::convert(argv[1]);
	return (0);
}
