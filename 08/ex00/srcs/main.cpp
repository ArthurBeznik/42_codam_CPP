
#include "easyfind.hpp"

#include <vector>
#include <list>
#include <deque>

void	testDeque(void) {

	std::deque<int>	nbDeque;

	nbDeque.push_back(1);
	nbDeque.push_back(2);
	nbDeque.push_back(3);
	nbDeque.push_back(4);
	nbDeque.push_back(5);

	std::cout << ::easyfind(nbDeque, 4) << std::endl; // return 4
	std::cout << ::easyfind(nbDeque, -1) << std::endl; // return -1
	std::cout << ::easyfind(nbDeque, 7) << std::endl; // return -1
}

void	testList(void) {

	std::list<int>	nbList;

	nbList.push_back(1);
	nbList.push_back(2);
	nbList.push_back(3);
	nbList.push_back(4);
	nbList.push_back(5);

	std::cout << ::easyfind(nbList, 4) << std::endl; // return 4
	std::cout << ::easyfind(nbList, -1) << std::endl; // return -1
	std::cout << ::easyfind(nbList, 7) << std::endl; // return -1
}

void	testVector(void) {

	std::vector<int>	nbVector;

	nbVector.push_back(1);
	nbVector.push_back(2);
	nbVector.push_back(3);
	nbVector.push_back(4);
	nbVector.push_back(5);
	
	std::cout << ::easyfind(nbVector, 5) << std::endl; // return 4
	std::cout << ::easyfind(nbVector, -1) << std::endl; // return -1
	std::cout << ::easyfind(nbVector, 7) << std::endl; // return -1
}

int	main(void) {

	testVector();
	std::cout << std::endl;
	testList();
	std::cout << std::endl;
	testDeque();
	std::cout << std::endl;

	return 0;
}
