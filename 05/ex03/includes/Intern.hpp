
#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include <AForm.hpp>

# define TABLE_SIZE 3

class Intern {

    private:
        
        
    public:
        Intern(void);
        Intern(const Intern &copy);
        Intern &operator = (const Intern &op);
        ~Intern(void);

		AForm	*makeForm(const std::string &formName, const std::string &target);
		AForm	*makePresidentialForm(const std::string &target);
		AForm	*makeShrubberyForm(const std::string &target);
		AForm	*makeRobotomyForm(const std::string &target);

		class InvalidFormNameException: public std::exception {
			public:
				char const *what() const throw() {
					return "Invalid form name";
				}
		};

};

typedef AForm    *(Intern::*InternMemFn)(const std::string &target);

typedef struct s_comp
{
    std::string	key;
    InternMemFn func;
}	t_comp;

const t_comp formTable[3] = {
    {"robotomy request", &Intern::makeRobotomyForm},
    {"presidential pardon", &Intern::makePresidentialForm},
    {"shrubbery creation", &Intern::makeShrubberyForm},
};


#endif
