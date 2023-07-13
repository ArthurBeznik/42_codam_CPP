
#include <Bureaucrat.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

void	signExecuteForm(Bureaucrat const &bc, AForm &form) {

	std::cout << "---------------------" << std::endl;
	// std::cout << form << std::endl; // ? testing
	try {
		// form.beSigned(bc);
		form.signForm(bc);
	} catch (std::exception &e) {
		std::cout << "Can't sign because: " << e.what() << std::endl;
	}
	// std::cout << form << std::endl; // ? testing
	// std::cout << bc << std::endl; // ? testing
	try {
		bc.executeForm(form);
	} catch (std::exception &e) {
		std::cout << "Can't execute because: " << e.what() << std::endl;
	}
}

void	testErrors(void) {

	std::cout << "---------------------" << std::endl;
	try {
		Bureaucrat		error("Thomas", 0);
	} catch (std::exception &e) {
		std::cout << "Can't create because: " << e.what() << std::endl;
	}
	try {
		Bureaucrat		error("Thomas", 151);
	} catch (std::exception &e) {
		std::cout << "Can't create because: " << e.what() << std::endl;
	}
}

int main(void) {

	testErrors();

	std::cout << "---------------------" << std::endl;
	Bureaucrat				low("Jules", 150);
	Bureaucrat				medium("Maxime", 71);
	Bureaucrat				high("Thomas", 1);
	PresidentialPardonForm	presiForm("Luc");
	RobotomyRequestForm 	robotForm("Skip");
	ShrubberyCreationForm 	shrubForm("Home");

	srand(time(NULL));

	/* PresidentialPardonForm */
	// signExecuteForm(high, presiForm);
	// signExecuteForm(medium, presiForm);
	// signExecuteForm(low, presiForm);

	/* RobotomyRequestForm */
	signExecuteForm(high, robotForm);
	signExecuteForm(high, robotForm);
	signExecuteForm(high, robotForm);
	signExecuteForm(high, robotForm);
	signExecuteForm(high, robotForm);
	signExecuteForm(medium, robotForm);
	signExecuteForm(low, robotForm);

	/* ShrubberyCreationForm */
	// signExecuteForm(high, shrubForm);
	// signExecuteForm(medium, shrubForm);
	// signExecuteForm(low, shrubForm);

	system("leaks -q ex02");
	return (0);
}
