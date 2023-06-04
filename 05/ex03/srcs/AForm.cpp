
#include <AForm.hpp>

/**
 * Constructors - Destructors
*/
AForm::AForm(void) : _name("N/A"), _target("N/A"), _isSigned(false), _gradeSign(150), _gradeExec(150) {
	
	std::cout << "[AForm] Default constructor called" << std::endl;
}

AForm::AForm(const std::string &name, const std::string &target, const int gradeSign, const int gradeExec) : _name(name), _target(target), _isSigned(false), _gradeSign(checkGrade(gradeSign)), _gradeExec(checkGrade(gradeExec)) {

	std::cout << "[AForm] Parameter constructor called" << std::endl;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _target(copy._target), _isSigned(copy._isSigned), _gradeSign(checkGrade(copy._gradeSign)), _gradeExec(checkGrade(copy._gradeExec)) {

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
const std::string	AForm::getName(void) const {
	
	return (this->_name);
}

const std::string	AForm::getTarget(void) const {
	
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
void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	
	if (bureaucrat.getGrade() >= this->_gradeSign) {
		this->_isSigned = false;
		throw AForm::GradeTooLowException();
	}
	this->_isSigned = true;
}

void	AForm::signForm(const Bureaucrat &bureaucrat) {
	
	try {
		beSigned(bureaucrat);
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	catch (std::exception &e) {
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because " << e.what() << std::endl;
	}
}

void 	AForm::execute(const Bureaucrat &executor) const {
	
	// std::cout << getSigned() << std::endl; // ? testing
	if (!getSigned()) {
		throw AForm::NotSignedException();
	}
	if (getGradeExec() <= executor.getGrade()) {
		throw AForm::GradeTooLowException();
	} else {
		// std::cout << this->_name << std::endl; // ? testing
		action();
	}
}

int		AForm::checkGrade(const int grade) const {

	// std::cout << grade << std::endl; // ? testing
	if (grade > 150) {
		throw AForm::GradeTooLowException();
	} else if (grade < 1) {
		throw AForm::GradeTooHighException();
	}
	return grade;
}
