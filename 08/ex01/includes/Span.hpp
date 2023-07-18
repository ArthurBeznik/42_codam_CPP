
#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <numeric>
# include <iostream>

class Span {

    private:
        std::vector<int>	_nbVector;
		unsigned int		_maxCapacity;
        
    public:
        Span(void);
		Span(unsigned int N);
        Span(const Span &copy);
        Span &operator = (const Span &op);
        ~Span(void);

		void			addNumber(const int toAdd);
		void 			addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
		void			checkVectorSize(void);

	class SpanMaxCapacityException: public std::exception {
		public:
			char const *what() const throw() {
				return "Span is at Max Capacity";
			}
	};

	class SpanNotFoundException: public std::exception {
		public:
			char const *what() const throw() {
				return "Span Not Found";
			}
	};

};


#endif
