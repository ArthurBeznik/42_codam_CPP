
#include <iostream>

template<typename T>
void	iter(T *array, size_t length, void (*f)(T const &)) {

	for (size_t i = 0; i < length; i++) {
		f(array[i]);
	}
}

template<typename T>
void	printValue(T const &value) {

	std::cout << value << std::endl;
	return ;
}

template<typename T>
void	uppercasePrint(T const &value) {

	std::cout << static_cast<char>(toupper(value)) << std::endl;
	return ;
}

