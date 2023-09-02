
#include <PmergeMe.hpp>

/**
 * Constructors - Destructors
*/
PmergeMe::PmergeMe(void) {
	
	// std::cout << "[PmergeMe] Default constructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &copy) {
	
	// std::cout << "[PmergeMe] Copy constructor called" << std::endl;
	(void)copy;
}

PmergeMe::~PmergeMe(void) {
	
	// std::cout << "[PmergeMe] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
PmergeMe	&PmergeMe::operator = (const PmergeMe &op) {
	
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
