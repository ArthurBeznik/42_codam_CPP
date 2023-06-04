
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

# include <AForm.hpp>

/**
 * Required grades: sign 72, exec 45.
*/
class RobotomyRequestForm : public AForm {

    private:
		void action(void) const;
        
    public:
        RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &op);
        ~RobotomyRequestForm(void);


};


#endif
