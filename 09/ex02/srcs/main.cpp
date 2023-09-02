
#include "PmergeMe.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " \"positive_integer_sequence\"" << std::endl;
        return 1;
    }

	PmergeMe pmergeMe;
    std::string inputSequence = argv[1];

    // Parse the input sequence into two containers (vector and list)
    std::vector<int>	vectorContainer;
    std::list<int>		listContainer;
    pmergeMe.parsePositiveIntegers(inputSequence, vectorContainer);
    pmergeMe.parsePositiveIntegers(inputSequence, listContainer);

	if (vectorContainer.empty() || listContainer.empty()) {
		std::cerr << "Error: invalid input string" << std::endl;
		return (1);
	}

    // Display unsorted sequences
    pmergeMe.displayContainer("Before: ", vectorContainer);
    pmergeMe.displayContainer("Before: ", listContainer);

    // Measure time for sorting using std::vector
    auto startVector = std::chrono::high_resolution_clock::now();
    pmergeMe.mergeInsertSort(vectorContainer);
    auto endVector = std::chrono::high_resolution_clock::now();

    // Measure time for sorting using std::list
    auto startList = std::chrono::high_resolution_clock::now();
    listContainer.sort();
    auto endList = std::chrono::high_resolution_clock::now();

    // Display sorted sequences
    pmergeMe.displayContainer("After: ", vectorContainer);
    pmergeMe.displayContainer("After: ", listContainer);

    // Calculate and display execution times
    auto timeVector = std::chrono::duration_cast<std::chrono::microseconds>(endVector - startVector);
    auto timeList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList);

    std::cout << "Time to process a range of " << vectorContainer.size() << " elements with std::vector: "
              << timeVector.count() << " us" << std::endl;
    std::cout << "Time to process a range of " << listContainer.size() << " elements with std::list: "
              << timeList.count() << " us" << std::endl;

    return (0);
}
