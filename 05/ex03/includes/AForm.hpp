/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/11 12:03:42 by abeznik       #+#    #+#                 */
/*   Updated: 2023/02/21 15:57:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <Bureaucrat.hpp>

class Form {

    private:
        const std::string   _name;
		bool				_signed;
		const int           _gradeSign;
		const int           _gradeExec;
        
    public:
        Form(void);
        Form(const Form &copy);
        Form &operator = (const Form &op);
        ~Form();

		std::string const   getName(void) const;
		bool				getSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;

		void				beSigned(Bureaucrat &bureaucrat);
		void				signForm(Bureaucrat &bureaucrat);

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

std::ostream &operator << (std::ostream &os, const Form &op);


#endif
