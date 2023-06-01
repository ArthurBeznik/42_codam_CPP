
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>

# include <AForm.hpp>

/**
 * Required grades: sign 145, exec 137.
*/
class ShrubberyCreationForm : public AForm {

    private:
		void action() const;
        
    public:
        ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator = (const ShrubberyCreationForm &op);
        ~ShrubberyCreationForm(void);


};


#endif
