#pragma once


class Vector
{
private:

	int* _data;
	unsigned int capacity;
	unsigned int size;

public:	
	Vector();  
	Vector(unsigned int capacity);
	Vector(const Vector& old);
	virtual ~Vector();

	void reserve(unsigned int capasity);
	void resize(unsigned int size);

	//Gettery:
	unsigned int capacity() const;
	unsigned int size() const;
	bool empty() const;

void insert(int value, unsigned int position);
void remove(unsigned int position);
void clear();
void push_back(int& value);

Vector& operator=(const Vector&);
	int& operator[](unsigned int position);
	
};

