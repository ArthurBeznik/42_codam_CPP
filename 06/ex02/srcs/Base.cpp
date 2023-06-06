
#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

/**
 * Constructors - Destructors
*/
Base::~Base(void) {
	
	std::cout << "[Base] Destructor called" << std::endl;
}

/**
 * Other functions
*/
Base	*generate(void) {

	int		instance = rand() % 3;

	switch (instance)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void	identify(Base *p) {

	try {
		A	&ptr = dynamic_cast<A&>(*p);
		std::cout << "Found A" << std::endl;
		std::cout << &ptr << std::endl;
		return ;
	} catch (std::exception &e) {
		// std::cout << "A not found" << std::endl;
	}
	try {
		B	&ptr = dynamic_cast<B&>(*p);
		std::cout << "Found B" << std::endl;
		std::cout << &ptr << std::endl;
		return ;
	} catch (std::exception &e) {
		// std::cout << "B not found" << std::endl;
	}
	try {
		C	&ptr = dynamic_cast<C&>(*p);
		std::cout << "Found C" << std::endl;
		std::cout << &ptr << std::endl;
		return ;
	} catch (std::exception &e) {
		// std::cout << "C not found" << std::endl;
	}
}

void	identify(Base &p) {

	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Found A" << std::endl;
		return ;
	} catch (std::exception &e) {
		// std::cout << "A not found" << std::endl;
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Found B" << std::endl;
		return ;
	} catch (std::exception &e) {
		// std::cout << "B not found" << std::endl;
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Found C" << std::endl;
		return ;
	} catch (std::exception &e) {
		// std::cout << "C not found" << std::endl;
	}
}
