
#include <RobotomyRequestForm.hpp>

/**
 * Constructors - Destructors
*/
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy Request Form", "N/A", 72, 45) {
	
	std::cout << "[RobotomyRequestForm] Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request Form", target, 72, 45) {
	
	std::cout << "[RobotomyRequestForm] Parameter constructor called" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getTarget(), copy.getGradeSign(), copy.getGradeSign()) {
	
	std::cout << "[RobotomyRequestForm] Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	
	std::cout << "[RobotomyRequestForm] Destructor called" << std::endl;
}

/**
 * Other functions
*/
void	RobotomyRequestForm::action(void) const {

	/**
	 * 	Makes some drilling noises. 
	 * 	Then, informs that <target> has been robotomized successfully 50% of the time. 
	 * 		Otherwise, informs that the robotomy failed.
	*/
	std::cout << "* drilling noises *" << std::endl;
	if (rand() % 2 == 1) {
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;
	}
	else {
		std::cout << "Robotomy failed." << std::endl;
	}
}
