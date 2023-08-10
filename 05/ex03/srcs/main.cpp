
#include <Bureaucrat.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <Intern.hpp>

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
	try {
		Bureaucrat				low("Jules", 150);
		Bureaucrat				medium("Maxime", 71);
		Bureaucrat				high("Thomas", 1);
		Intern	intern;
		AForm	*test = intern.makeForm("Test", "None");

		signExecuteForm(high, *test);
		signExecuteForm(medium, *test);
		signExecuteForm(low, *test);
		std::cout << "---------------------" << std::endl;
	} catch (std::exception &e) {
		std::cout << "Can't create because: " << e.what() << std::endl;
	}
	try {
		Bureaucrat				low("Jules", 150);
		Bureaucrat				medium("Maxime", 71);
		Bureaucrat				high("Thomas", 1);
		Intern	intern;
		AForm	*none = intern.makeForm("None", "Test");

		signExecuteForm(high, *none);
		signExecuteForm(medium, *none);
		signExecuteForm(low, *none);
		std::cout << "---------------------" << std::endl;

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
	std::cout << "---------------------" << std::endl;

	Intern	intern;
	AForm	*presi = intern.makeForm("presidential pardon", "Thomas");
	AForm	*robot = intern.makeForm("robotomy request", "Skip");
	AForm	*shrub = intern.makeForm("shrubbery creation", "Home");
	std::cout << "---------------------" << std::endl;

	srand(time(NULL));
	
	/* PresidentialPardonForm */
	signExecuteForm(high, *presi);
	signExecuteForm(medium, *presi);
	signExecuteForm(low, *presi);
	std::cout << "---------------------" << std::endl;

	/* RobotomyRequestForm */
	signExecuteForm(high, *robot);
	signExecuteForm(high, *robot);
	signExecuteForm(high, *robot);
	signExecuteForm(high, *robot);
	signExecuteForm(high, *robot);
	signExecuteForm(medium, *robot);
	signExecuteForm(low, *robot);
	std::cout << "---------------------" << std::endl;

	/* ShrubberyCreationForm */
	signExecuteForm(high, *shrub);
	signExecuteForm(medium, *shrub);
	signExecuteForm(low, *shrub);
	std::cout << "---------------------" << std::endl;

	// system("leaks -q ex03");
	
	return (0);
}
