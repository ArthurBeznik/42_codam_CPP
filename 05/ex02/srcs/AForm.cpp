/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

/**
 * Constructors - Destructors
*/
Form::Form(void) : _name("N/A"), _signed(false), _gradeSign(150), _gradeExec(150) {
	
	std::cout << "[Form] Default constructor called" << std::endl;
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec) {

	std::cout << "[Form] Copy constructor called" << std::endl;	
}

Form::~Form(void) {
	
	std::cout << "[Form] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Form	&Form::operator = (const Form &op) {
	
	if (this == &op)
		return (*this); 
	return (*this);
}

std::ostream &operator << (std::ostream &os, const Form &op) {
	
	os << op.getName() << ", form grade to sign " << op.getGradeSign() << ", form grade to execute " << op.getGradeExec() << ", form is signed " << op.getSigned();
	return (os);
}

/**
 * Getters - Setters
*/
std::string const	Form::getName(void) const {
	
	return (this->_name);
}

bool	Form::getSigned(void) const {
	
	return (this->_signed);
}

int		Form::getGradeSign(void) const {
	
	return (this->_gradeSign);
}

int		Form::getGradeExec(void) const {

	return (this->_gradeExec);
}

/**
 * Other functions
*/
void	Form::beSigned(Bureaucrat &bureaucrat) {
	
	if (bureaucrat.getGrade() >= this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void	Form::signForm(Bureaucrat &bureaucrat) {
	
	try {
		beSigned(bureaucrat);
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	catch (std::exception &e) {
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because " << e.what() << std::endl;
	}
}
