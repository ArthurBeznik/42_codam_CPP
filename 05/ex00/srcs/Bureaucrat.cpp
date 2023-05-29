/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:23 by abeznik       #+#    #+#                 */
/*   Updated: 2023/03/01 11:56:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

/**
 * Constructors - Destructors
*/
Bureaucrat::Bureaucrat(void) : _name("N/A"), _grade(150) {
	
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Parametric constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade) {
	
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	
	std::cout << "Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &op) {
	
	std::cout << "Assignment operator called" << std::endl;
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
std::string const Bureaucrat::getName(void) const {

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
