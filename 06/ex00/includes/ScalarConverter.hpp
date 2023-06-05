
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <ctype.h>
# include <iomanip> 
# include <cfloat>
# include <cmath>

# include <TypeTemplate.hpp>

class ScalarConverter {

    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator = (const ScalarConverter &op);
        ~ScalarConverter(void);
        
    public:
		static void				convert(const std::string &str);
		static ScalarConverter	&getInstance(void); // ! Not needed for the subject ?

		class ImpossibleConversionException: public std::exception {
			public:
				char const *what() const throw() {
					return "impossible";
				}
		};

		class NonDisplayableException: public std::exception {
			public:
				char const *what() const throw() {
					return "non displayable";
				}
		};
};


#endif
