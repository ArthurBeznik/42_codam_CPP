
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# include <AForm.hpp>

class AForm;

class Bureaucrat {

    private:
        const std::string   _name;
		int                 _grade;
        
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator = (const Bureaucrat &op);
        ~Bureaucrat();

		std::string const   getName(void) const;
		int					getGrade(void) const;
		int					incrementGrade(void);
		int					decrementGrade(void);

		void 				executeForm(const AForm &form) const;

		/* Highest grade is 1 */
		class GradeTooHighException: public std::exception {
			public:
				char const *what() const throw() {
					return "Grade too high (max = 1)";
				}
		};

		/* Lowest grade is 150 */
		class GradeTooLowException: public std::exception {
			public:
				char const *what() const throw() {
					return "Grade too low (min = 150)";
				}
		};
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &op);

#endif
