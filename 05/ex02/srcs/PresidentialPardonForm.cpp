
#include <PresidentialPardonForm.hpp>

/**
 * Constructors - Destructors
*/
PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Pardon Form", "N/A", 25, 5) {
	
	std::cout << "[PresidentialPardonForm] Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon Form", target, 25, 5) {
	
	std::cout << "[PresidentialPardonForm] Parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getTarget(), copy.getGradeSign(), copy.getGradeSign()) {
	
	std::cout << "[PresidentialPardonForm] Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	
	std::cout << "[PresidentialPardonForm] Destructor called" << std::endl;
}

/**
 * Other functions
*/
void	PresidentialPardonForm::action(void) const {

	/**
	 * Informs that <target> has been pardoned by Zaphod Beeblebrox.
	*/
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
