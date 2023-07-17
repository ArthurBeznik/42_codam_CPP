
# include "iter.hpp"
# include <cstring>

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int main(void) {

	int		intArray[] = {1, 2, 3, 4, 5};

	iter(intArray, 5, printValue<int>);
	std::cout << std::endl;

	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
	iter(charArray, 5, uppercasePrint<char>);
	std::cout << std::endl;

	Awesome	awArray[5]; 
	iter(awArray, 5, printValue<Awesome>);
	std::cout << std::endl;

	system("leaks -q ex01");
	return (0);
}
