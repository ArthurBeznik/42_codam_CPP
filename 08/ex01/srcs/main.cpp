
#include <Span.hpp>

void	testRangeAdd(void) {

	std::cout << "\tTesting Range Add" << std::endl;

	Span		bigSpan = Span(10000);
	std::vector<int> storage = std::vector<int>(9998);

	std::fill(storage.begin(), storage.end(), 10);
	bigSpan.addNumber(0);
	bigSpan.addNumbers(storage.begin(), storage.end());
	bigSpan.addNumber(15);

	std::cout << bigSpan.shortestSpan() << std::endl;
	std::cout << bigSpan.longestSpan() << std::endl;
}

void	testBigSpan(void) {
	
	std::cout << "\tTesting Big Span" << std::endl;

	Span	sp = Span(10001);

	srand(time(NULL));
	for (size_t i = 0; i < 10001; ++i)
		sp.addNumber(rand());
	
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
}

void	testSmallSpan(void) {

	std::cout << "\tTesting Small Span" << std::endl;

	Span	sp = Span(3);

	srand(time(NULL));
	for (size_t i = 0; i < 3; ++i)
		sp.addNumber(rand());
	
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
}

void	testSubject(void) {

	std::cout << "\tTesting Subject Example" << std::endl;

	Span	sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
}

void	testMaxCapacity(void) {

	std::cout << "\tTesting Max Capacity" << std::endl;

	Span	sp = Span(2);

	srand(time(NULL));
	try {
		for (size_t i = 0; i < 3; ++i)
			sp.addNumber(rand());
	} catch (Span::SpanMaxCapacityException &e) {
		std::cout << e.what() << std::endl;
	}
}

void	testNotFound(void) {

	std::cout << "\tTesting Span Not Found" << std::endl;
	try {
		Span	sp = Span(5);
		sp.longestSpan();
	} catch (Span::SpanNotFoundException &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Span	sp = Span(5);
		sp.shortestSpan();
	} catch (Span::SpanNotFoundException &e) {
		std::cout << e.what() << std::endl;
	}
}

int	main(void) {

	testNotFound();
	std::cout << std::endl;
	testMaxCapacity();
	std::cout << std::endl;
	testSubject();
	std::cout << std::endl;
	testSmallSpan();
	std::cout << std::endl;
	testBigSpan();
	std::cout << std::endl;
	testRangeAdd();
	std::cout << std::endl;

	// system("leaks -q ex01");

	return 0;
}
