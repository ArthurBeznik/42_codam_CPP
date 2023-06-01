
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <AForm.hpp>

/**
 * Required grades: sign 72, exec 45.
*/
class RobotomyRequestForm : public AForm {

    private:
		void action() const;
        
    public:
        RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &op);
        ~RobotomyRequestForm(void);


};


#endif
