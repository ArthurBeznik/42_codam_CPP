
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
	*this = copy;
}

Span::~Span(void) {
	
	std::cout << "[Span] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Span	&Span::operator = (const Span &op) {
	
	if (this != &op) {
		_maxCapacity = op._maxCapacity;
		_nbVector = std::vector<int>(op._nbVector);
	}
	return (*this);
}

/**
 * Other functions
*/
void			Span::addNumber(const int toAdd) {

	if (_nbVector.size() + 1 > _maxCapacity)
		throw SpanMaxCapacityException();
	_nbVector.push_back(toAdd);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	
	_nbVector.insert(_nbVector.end(), begin, end);
	if (_nbVector.size() > _maxCapacity) {
		throw SpanMaxCapacityException();
	}
}

/**
 * 1. Sort the vector in ascending order
 * 2. Calculate the difference between two adjacent elements and 
 * 		overwrite the copyVector with the results
 * 3. Get the minimum element and return it (= shortest span)
*/
unsigned int	Span::shortestSpan(void) {

	checkVectorSize();
	std::vector<int> copyVector = std::vector<int>(_nbVector);

	std::sort(copyVector.begin(), copyVector.end());
	std::adjacent_difference(copyVector.begin(), copyVector.end(), copyVector.begin());
	return *std::min_element(copyVector.begin(), copyVector.end());
}

/**
 * Longest span is the difference between max and min elements.
*/
unsigned int	Span::longestSpan(void) {
	
	checkVectorSize();
	return *std::max_element(_nbVector.begin(), _nbVector.end()) - 
		*std::min_element(_nbVector.begin(), _nbVector.end());
}

void		Span::checkVectorSize(void) {

	if (_nbVector.size() < 2)
		throw SpanNotFoundException();
}
