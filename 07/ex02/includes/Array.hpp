
#include <exception>

template <typename T>
class Array {

	private: 
		T				*_array;
		unsigned int	_size;

	public:
		Array(void): _array(new T[0]()), _size(0) {}
		Array(const unsigned int size): _array(new T[size]()), _size(size) {}

		Array(const Array& copy) : _array(NULL) {
			*this = copy;
			return;
		};

		Array&	operator = (const Array& array) {
			delete[] _array;
			_size = array._size;
			_array = new T[_size]();
			for(unsigned int i = 0; i < _size; i++){
				_array[i] = array._array[i];
			}
			return *this;
		};

		T&	operator [] (const unsigned int index) const {
			if (index < 0 || index >= _size ) {
				throw (IndexOutofBoundsException());
			}
			return _array[index];
		}

		~Array() {
			delete[] _array;
		}

		unsigned int	size(void) const {
			return _size;
		}


	class IndexOutofBoundsException : public std::exception {
	public:
		const char *what() const throw(){
			return "Index is out of bounds";
		}
	};
};
