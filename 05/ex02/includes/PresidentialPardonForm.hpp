
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <AForm.hpp>

/**
 * Required grades: sign 25, exec 5.
*/
class PresidentialPardonForm : public AForm {

    private:
		void action() const;
        
    public:
        PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &op);
        ~PresidentialPardonForm(void);


};


#endif
