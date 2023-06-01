
#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

# include <Bureaucrat.hpp>

class Bureaucrat;

class AForm {

	protected:
		AForm(const std::string &name, const std::string &target, const int gradeSign, const int gradeExec);

    private:
        const std::string   _name;
		const std::string 	_target;
		bool				_isSigned;
		const int           _gradeSign;
		const int           _gradeExec;
        
    public:
        AForm(void);
        AForm(const AForm &copy);
        AForm &operator = (const AForm &op);
        virtual ~AForm(void);

		std::string const   getName(void) const;
		std::string const   getTarget(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;

		void				beSigned(Bureaucrat const &bureaucrat);
		void				signForm(Bureaucrat const &bureaucrat);

		void				execute(Bureaucrat const &executor) const;
		virtual void		action(void) const = 0;

		/* Highest grade is 1 */
		class GradeTooHighException: public std::exception {
			public:
				char const *what() const throw() {
					return "Grade is too high (max = 1)";
				}
		};

		/* Lowest grade is 150 */
		class GradeTooLowException: public std::exception {
			public:
				char const *what() const throw() {
					return "Grade is too low (min = 150)";
				}
		};

		/* Form is not signed */
		class NotSignedException: public std::exception {
			public:
				char const *what() const throw() {
					return "Form is not signed";
				}
		};

};

std::ostream &operator << (std::ostream &os, const AForm &op);

#endif
