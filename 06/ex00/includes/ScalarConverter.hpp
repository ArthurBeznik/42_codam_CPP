
#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter {

    private:
        
        
    public:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator = (const ScalarConverter &op);
        ~ScalarConverter(void);

		int	convert(const std::string &str) const;
};


#endif
