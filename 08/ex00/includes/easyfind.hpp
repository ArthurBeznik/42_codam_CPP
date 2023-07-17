
# include <iostream>
# include <algorithm>

template<typename T>
int easyfind(T &container, int toFind) {

	typename T::iterator it;

    it = std::find(container.begin(), container.end(), toFind);
    if (it == container.end())
		return -1;
	return toFind;
}

