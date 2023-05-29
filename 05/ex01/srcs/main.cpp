
#include <Bureaucrat.hpp>
#include <Form.hpp>

void testDecrement(Bureaucrat &b) {

	std::cout << b << std::endl;
	try {
		b.decrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
}

void	testIncrement(Bureaucrat &b) {

	std::cout << b << std::endl;
	try {
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
}

void testCopy(void) {

	Bureaucrat	maxime("Maxime", 1);
	Bureaucrat	jules(maxime);

	std::cout << maxime << std::endl;
	std::cout << jules << std::endl;
	std::cout << std::endl;
	testIncrement(maxime);
	testIncrement(jules);
	std::cout << std::endl;
	testDecrement(maxime);
	testDecrement(jules);
}

void	testParam(void) {

	Bureaucrat	maxime("Maxime", 1);

	std::cout << maxime << std::endl;
	std::cout << std::endl;
	testDecrement(maxime);
	std::cout << std::endl;
	testIncrement(maxime);
}

void	testDefault(void) {

	Bureaucrat	thomas;
	Form		form;

	std::cout << form << std::endl;
	form.signForm(thomas);
	std::cout << thomas << std::endl;
	std::cout << std::endl;
	testDecrement(thomas);
	std::cout << std::endl;
	testIncrement(thomas);
}

int	main(void) {

	std::cout << "---------------------------------" << std::endl;
	testDefault();
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	testParam();
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	testCopy();
	std::cout << "---------------------------------" << std::endl;
	std::cout << std::endl;
	return (0);
}
