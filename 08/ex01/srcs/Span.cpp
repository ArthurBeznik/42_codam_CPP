
#include <Span.hpp>

/**
 * Constructors - Destructors
*/
Span::Span(void): _maxCapacity(0) {
	
	std::cout << "[Span] Default constructor called" << std::endl;
}

Span::Span(unsigned int N): _maxCapacity(N) {

	std::cout << "[Span] Parametric constructor called" << std::endl;
}

Span::Span(const Span &copy) {
	
	std::cout << "[Span] Copy constructor called" << std::endl;
	(void)copy;
}

Span::~Span(void) {
	
	std::cout << "[Span] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Span	&Span::operator = (const Span &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/
// Span	*Span::getVariable(void) const {

// 	return (this->);
// 	// return ();
// }

/**
 * Other functions
*/
void			Span::addNumber(int toAdd) {

	if (_nbVector.size() + 1 > _maxCapacity)
		throw SpanMaxCapacityException();
	_nbVector.push_back(toAdd);
}

unsigned int	Span::shortestSpan(void) {

	return 0;
}

unsigned int	Span::longestSpan(void) {
	
	return 0;
}
