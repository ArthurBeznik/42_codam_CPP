
#include <ShrubberyCreationForm.hpp>

/**
 * Constructors - Destructors
*/
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery Creation Form", "N/A", 145, 137){
	
	std::cout << "[ShrubberyCreationForm] Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", target, 145, 137) {
	
	std::cout << "[ShrubberyCreationForm] Parameter constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getTarget(), copy.getGradeSign(), copy.getGradeSign()) {
	
	std::cout << "[ShrubberyCreationForm] Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	
	std::cout << "[ShrubberyCreationForm] Destructor called" << std::endl;
}

/**
 * Other functions
*/
void	ShrubberyCreationForm::action(void) const {

	/**
	 * Create a file <target>_shrubbery in the working directory, 
	 * 	and writes ASCII trees inside it.
	*/
	std::string fileName = getTarget() + "_shrubbery";
	std::ofstream outputFile(fileName.c_str());
    if (!outputFile) {
        std::cerr << "Error creating file: " << fileName << std::endl;
    }
	std::string tree = "     /\\ \n    /  \\ \n   /    \\ \n  /______\\ \n    |  | \n";
    outputFile << tree << "\n";
    outputFile << tree << "\n";
    outputFile << tree << "\n";
    outputFile << tree << "\n";
    outputFile.close();
}
