
#include <RPN.hpp>

/**
 * Constructors - Destructors
*/
RPN::RPN(void) {
	
	// std::cout << "[RPN] Default constructor called" << std::endl;
}

RPN::RPN(const RPN &copy) {
	
	// std::cout << "[RPN] Copy constructor called" << std::endl;
	(void)copy;
}

RPN::~RPN(void) {
	
	// std::cout << "[RPN] Destructor called" << std::endl;
}

/**
 * Operator overloads
*/
RPN	&RPN::operator = (const RPN &op) {
	
	if (this != &op) {
		
	}
	return (*this);
}

/**
 * Getters - Setters
*/


/**
 * Other functions
*/
#include <iostream>
#include <stack>
#include <sstream>
#include <vector>

// Function to evaluate an RPN expression
int RPN::evaluateRPN(const std::string& expression) {
    std::istringstream iss(expression);
    std::string token;
    std::stack<int> numbers;

    while (iss >> token) {
        if (std::isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && std::isdigit(token[1]))) {
            int number = std::stoi(token);
            numbers.push(number);
        } else if (token == "+" && numbers.size() >= 2) {
            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();
            numbers.push(operand1 + operand2);
        } else if (token == "-" && numbers.size() >= 2) {
            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();
            numbers.push(operand1 - operand2);
        } else if (token == "*" && numbers.size() >= 2) {
            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();
            numbers.push(operand1 * operand2);
        } else if (token == "/" && numbers.size() >= 2) {
            int operand2 = numbers.top();
            if (operand2 == 0) {
                std::cerr << "Error: Division by zero." << std::endl;
                return (-1);
            }
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();
            numbers.push(operand1 / operand2);
        } else {
            std::cerr << "Error: Invalid token: " << token << std::endl;
            return (-1);
        }
    }

    if (numbers.size() == 1) {
        return numbers.top();
    } else {
        std::cerr << "Error: Invalid expression." << std::endl;
        return (-1);
    }
}
