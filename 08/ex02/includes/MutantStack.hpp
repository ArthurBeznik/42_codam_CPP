
# include <stack>

# include <iostream>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(MutantStack const &copy) {
			*this = copy;
		}

		MutantStack &operator = (MutantStack const &original) {
			std::stack<T>::operator=(original);
			return *this;
		};

		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::reverse_iterator reverseIterator;

		iterator begin(void) {
			return this->c.begin();
		};

		iterator end(void) {
			return this->c.end();
		};

		reverseIterator rbegin(void) {
			return this->c.rbegin();
		};

		reverseIterator rend(void) {
			return this->c.rend();
		};

};
