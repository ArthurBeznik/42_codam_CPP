
#include <Bureaucrat.hpp>

/**
 * Constructors - Destructors
*/
Bureaucrat::Bureaucrat(void) : _name("N/A"), _grade(150) {
	
	std::cout << "[Bureaucrat] Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, const int grade) : _name(name) {

	std::cout << "[Bureaucrat] Parameter constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
	
	std::cout << "[Bureaucrat] Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	
	std::cout << "[Bureaucrat] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &op) {
	
	std::cout << "[Bureaucrat] Assignment operator called" << std::endl;
	if (this != &op) {
		this->_grade = op.getGrade();
	}
	return *this;
}

std::ostream &operator << (std::ostream &os, const Bureaucrat &op) {

	os << op.getName() << ", bureaucrat grade " << op.getGrade();
	return (os);
}

/**
 * Getters - Setters
*/
const std::string Bureaucrat::getName(void) const {

	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

/**
 * Other functions
*/
int	Bureaucrat::incrementGrade(void) {

	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	return (this->_grade);
}

int	Bureaucrat::decrementGrade(void) {

	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	return (this->_grade);
}

void Bureaucrat::executeForm(const AForm &form) const {

	// std::cout << *this << std::endl; // ? testing
	form.execute(*this);
	std::cout << getName() << " executed " << form.getName() << std::endl;
}
