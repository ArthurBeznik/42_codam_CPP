
#include <Serializer.hpp>

/**
 * Constructors - Destructors
*/
Serializer::Serializer(void) {
	
	std::cout << "[Serializer] Default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &copy) {
	
	std::cout << "[Serializer] Copy constructor called" << std::endl;
	(void)copy;
}

Serializer::~Serializer(void) {
	
	std::cout << "[Serializer] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Serializer	&Serializer::operator = (const Serializer &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Other functions
*/
uintptr_t 	Serializer::serialize(Data* ptr) {

	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 		Serializer::deserialize(uintptr_t raw) {
	
	return (reinterpret_cast<Data*>(raw));
}
