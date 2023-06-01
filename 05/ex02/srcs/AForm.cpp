
#include <AForm.hpp>

/**
 * Constructors - Destructors
*/
AForm::AForm(void) : _name("N/A"), _target("N/A"), _isSigned(false), _gradeSign(150), _gradeExec(150) {
	
	std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, const std::string &target, const int gradeSign, const int gradeExec) : _name(name), _target(target), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {

	std::cout << "[AForm] Parameter constructor called" << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _target(copy._target), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec) {

	std::cout << "[AForm] Copy constructor called" << std::endl;	
}

AForm::~AForm(void) {
	
	std::cout << "[AForm] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
AForm	&AForm::operator = (const AForm &op) {
	
	if (this != &op) {
		this->_isSigned = op._isSigned;
	}
	return (*this);
}

std::ostream &operator << (std::ostream &os, const AForm &op) {
	
	os << op.getName() << " | grade to sign [" << op.getGradeSign() << "] | grade to execute [" << op.getGradeExec() << "] | signed [" << op.getSigned() << "]";
	return (os);
}

/**
 * Getters - Setters
*/
std::string const	AForm::getName(void) const {
	
	return (this->_name);
}

std::string const	AForm::getTarget(void) const {
	
	return (this->_target);
}

bool	AForm::getSigned(void) const {
	
	return (this->_isSigned);
}

int		AForm::getGradeSign(void) const {
	
	return (this->_gradeSign);
}

int		AForm::getGradeExec(void) const {

	return (this->_gradeExec);
}

/**
 * Other functions
*/
void	AForm::beSigned(Bureaucrat const &bureaucrat) {
	
	if (bureaucrat.getGrade() >= this->_gradeSign) {
		this->_isSigned = false;
		throw AForm::GradeTooLowException();
	}
	this->_isSigned = true;
}

void	AForm::signForm(Bureaucrat const &bureaucrat) {
	
	try {
		beSigned(bureaucrat);
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	catch (std::exception &e) {
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because " << e.what() << std::endl;
	}
}

void AForm::execute(Bureaucrat const &executor) const {
	
	// std::cout << getSigned() << std::endl; // ? testing
	if (!getSigned()) {
		throw AForm::NotSignedException();
	}
	if (getGradeExec() <= executor.getGrade()) {
		throw AForm::GradeTooLowException();
	} else {
		action();
		// std::cout << executor.getName() << " executed " << form << std::endl;
	}
}
