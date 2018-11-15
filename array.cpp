#include <iostream>
#include "array.h"
using namespace std;

Array::Array(int startCapacity){
	if (startCapacity <= 0)
		capacity = DEFAULT_CAPACITY;
	else
		capacity = startCapacity;
	ptr = new int[capacity];
	size = 0;
}
	delete[] ptr;
	size = arr.size;
	capacity = arr.capacity;
	for (int i = 0; i<size; i++)
		ptr[i] = arr.ptr[i];
		return *this;
	if (capacity != arr.capacity){
		delete[] ptr;
		ptr = new int[arr.capacity];
		capacity = arr.capacity;
	}
	size = arr.size;
	for (int i = 0; i<size; i++)
		ptr[i] = arr.ptr[i];
	return *this;
	if (index >= size || index < 0)
		throw ArrayException();
	else
		return ptr[index];
}
	if (index < 0 || index > size)
		throw ArrayException();
	if (size == capacity)
		increaseCapacity(size + 1);
	for (int j = size - 1; j >= index; j--)
		ptr[j + 1] = ptr[j];
	size++;
	ptr[index] = elem;
}
void Array::insert(int elem){
	insert(elem, size);
}
		capacity * 2 : newCapacity;
	int* newPtr = new int[capacity];
	for (int i = 0; i<size; i++)
		newPtr[i] = ptr[i];
	delete[] ptr;
	ptr = newPtr;
	if (index < 0 || index >= size)
		throw ArrayException();
	for (int j = index; j<size - 1; j++)
		ptr[j] = ptr[j + 1];
	ptr[size - 1] = 0;
	size--;
}
	out << "Total size: " << arr.size << endl;
	for (int i = 0; i<arr.size; i++)
		out << arr.ptr[i] << endl;
	return out;
}
	Array arr(4);
	for (int i = 0; i<4; i++)
		arr.insert(i + 1);
	cout << arr << endl;
	for (int i = 0; i<8; i += 2)
		arr.insert(10 + i, i);
	cout << arr << endl;
	for (int i = 1; i<8; i += 2)
		arr[i] = 20 + i;
	cout << arr << endl;
	for (int i = 6; i >= 0; i -= 3)
		arr.remove(i);
	cout << arr << endl;