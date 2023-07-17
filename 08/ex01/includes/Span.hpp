
#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
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

		void			addNumber(int toAdd);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

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
