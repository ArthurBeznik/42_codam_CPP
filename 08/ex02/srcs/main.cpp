
#include <MutantStack.hpp>

void	testMine(void) {

	MutantStack<int>	stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	// Normal
	MutantStack<int>::iterator iterator = stack.begin();
	iterator++;
	std::cout << *iterator << std::endl;
	iterator++;
	std::cout << *iterator << std::endl;
	iterator = stack.end();
	iterator--;
	std::cout << *iterator << std::endl;
	iterator--;
	std::cout << *iterator << std::endl;

	// Reverse
	std::cout << "----- Reverse -----" << std::endl;
	MutantStack<int>::reverseIterator reverseIterator = stack.rbegin();
	reverseIterator++;
	std::cout << *reverseIterator << std::endl;
	reverseIterator++;
	std::cout << *reverseIterator << std::endl;
	reverseIterator = stack.rend();
	reverseIterator--;
	std::cout << *reverseIterator << std::endl;
	reverseIterator--;
	std::cout << *reverseIterator << std::endl;
	return ;
}

void	testSubject(void) {

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(822);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while(it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return ;
}

int	main(void) {

	testSubject();
	std::cout << std::endl;
	testMine();
	std::cout << std::endl;
	
	// system("leaks -q ex02");

	return 0;
}
