
#include <Base.hpp>

int	main(void) {

	srand(time(NULL));

	Base	*base = generate();

	std::cout << base << std::endl;

	std::cout << std::endl;
	identify(base);
	std::cout << std::endl;
	identify(*base);
	return (0);
}