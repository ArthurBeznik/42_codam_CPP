
#include "RPN.hpp"

/**
 * ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
 * = 42
 * 
 *  ./RPN "7 7 * 7 -"
 * = 42
 * 
 * ./RPN "1 2 * 2 / 2 * 2 4 - +"
 * = 0
 * 
 * ./RPN "(1 + 1)"
 * = Error
*/
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " \"RPN_expression\"" << std::endl;
        return (1);
    }

	RPN rpn;
    std::string expression = argv[1];
    int result = rpn.evaluateRPN(expression);
    if (result != -1) {
        std::cout << result << std::endl;
    }

    return (0);
}
