
#include <iostream>
#include "Array.hpp"

int main(void) {

	try {
		Array<int> emptyArray(0); // Empty array
		emptyArray[1] = 2;
	} catch (const std::exception& e) {
			std::cout << e.what() << std::endl;  // Print: Exception caught: Index out of bounds
    }

    Array<int> intArray(5);  // Create an array of 5 integers

    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i + 1;  // Set values 1 to 5
    }

    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";  // Print: 1 2 3 4 5
    }
    std::cout << std::endl;

    Array<int> copyArray = intArray;  // Copy construction

    intArray[0] = 10;  // Modify original array

    std::cout << copyArray[0] << std::endl;  // Print: 1 (copy unaffected by modification)

    Array<int> anotherArray;
    anotherArray = intArray;  // Assignment operator

    intArray[1] = 20;  // Modify original array

    std::cout << anotherArray[1] << std::endl;  // Print: 2 (anotherArray unaffected by modification)

    try {
        int value = intArray[10];  // Access out-of-bounds index
        std::cout << value << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;  // Print: Exception caught: Index out of bounds
    }

	// system("leaks -q ex02");
	
    return 0;
}

/**
 * Eval Sheet Main
*/
// #define MAX_VAL 750

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
