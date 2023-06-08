
template<typename T>
struct is_integral {

    static const bool value = false;
};

template<>
struct is_integral<int> {

    static const bool value = true;
};

template<>
struct is_integral<unsigned int> {

    static const bool value = true;
};

template<typename T>
struct is_floating_point {

    static const bool value = false;
};

template<>
struct is_floating_point<float> {

    static const bool value = true;
};

template<>
struct is_floating_point<double> {

    static const bool value = true;
};

template<typename T>
struct is_literal {

	static const bool value = false;
};

template<>
struct is_literal<char> {

	static const bool value = true;
};

template<typename T>
void checkType(T input) {
	
	(void)input;
    if (is_integral<T>::value) {
        std::cout << "Input is integral." << std::endl;
    } else if (is_floating_point<T>::value) {
        std::cout << "Input is floating point." << std::endl;
    } else if (is_literal<T>::value) {
		std::cout << "Input is literal." << std::endl;
	} else {
		std::cout << "Unknown input." << std::endl;
	}
}

/* Check type of str */
// checkType(str); // ? testing
// try {
// 	checkType(static_cast<char>(str[0]));
// } catch (std::exception &e) {
// 	std::cerr << e.what() << std::endl;
// }
// try {
// 	checkType(std::stoi(str, &sz));
// } catch (std::exception &e) {
// 	std::cerr << e.what() << std::endl;
// }
// try {
// 	checkType(std::stof(str, &sz));
// } catch (std::exception &e) {
// 	std::cerr << e.what() << std::endl;
// }
// try {
// 	checkType(std::stod(str, &sz));
// } catch (std::exception &e) {
// 	std::cerr << e.what() << std::endl;
// }
