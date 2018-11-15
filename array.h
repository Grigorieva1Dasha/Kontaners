#pragma once

const int DEFAULT_CAPACITY = 10;

class Array{
public:
	int capacity;
	int* ptr;
	int size;
	explicit Array(int startCapacity = DEFAULT_CAPACITY);
	~Array();
	Array(const Array& arr);
	Array& operator =(const Array& arr);
	int& operator [](int index);
	void insert(int index, int elem);
	void insert(int elem);
	void increaseCapacity(int newCapacity);
	void remove(int index);
	int getSize() const;
//	friend ostream& operator <<(ostream& out, const Array& arr);
};

class ArrayException {};

