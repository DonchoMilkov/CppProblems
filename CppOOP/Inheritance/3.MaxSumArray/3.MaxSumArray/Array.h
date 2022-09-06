#ifndef Array_H
#define Array_H
#include <memory>

template<typename T>
class Array {
private:
	std::shared_ptr<T> myArray;
	int _size;
public:
	Array(int size)
	{
		myArray = new std::shared_ptr<T>[size];
		_size = size;
	}

	T & operator[](std::size_t idx) {
		return myArray[idx];
	}
	/*const T & operator[](std::size_t idx) const {
		return myArray+idx;
	}*/

	const int getSize() {
		return _size;
	}
};

#endif // !Array_H
