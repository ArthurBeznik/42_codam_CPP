
#ifndef PMERGEME_HPP
# define PMERGEME_HPP


# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <chrono>
# include <sstream>
# include <string>

class PmergeMe {
    private:
        
        
    public:
        PmergeMe(void);
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator = (const PmergeMe &op);
        ~PmergeMe(void);

		// Function to parse space-separated integers from a string and store them in a container
		template <typename Container>
		void parsePositiveIntegers(const std::string& input, Container& container) {
			std::istringstream iss(input);
			int number;
			while (iss >> number) {
				if (number > 0) {
					container.push_back(number);
				} else {
					std::cerr << "Error: invalid input string" << std::endl;
					exit(1);
				}
			}
		}

		// Function to display a container of integers
		template <typename Container>
		void displayContainer(const std::string& message, const Container& container) {
			std::cout << message;
			for (const auto& num : container) {
				std::cout << num << " ";
			}
			std::cout << std::endl;
		}

		// Merge-Insert Sort using std::vector
		template <typename Container>
		void mergeInsertSort(Container& container) {
			if (container.size() <= 1) {
				return;
			}

			Container temp;
			typename Container::iterator it;

			for (const auto& item : container) {
				it = std::upper_bound(temp.begin(), temp.end(), item);
				temp.insert(it, item);
			}

			container = temp;
		}

};


#endif
