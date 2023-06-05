
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

# include <TypeTemplate.hpp>

class ScalarConverter {

    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator = (const ScalarConverter &op);
        ~ScalarConverter(void);
        
    public:
		static int				convert(const std::string &str);
		static ScalarConverter	&getInstance(void); // ! Not needed for the subject ?

};


#endif
