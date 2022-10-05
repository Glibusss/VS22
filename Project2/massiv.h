#pragma once
#include <iostream>
#include <cstdlib>

using namespace std;
class point
{
protected:
	int* data;
	int size;
public:
	point() {
		this->size = 0;
		this->data = new int[0];
	}
	point( int x) {
		this->size = x;
		this->data = new int[x];
		for (int i = 0; i < x; i++)
			this->data[i] = i;
	}
	//Конструктор копирования
	point(const point& pt) {
		this->size = pt.size;
		this->data = new int[pt.size];
		for (int i = 0; i<pt.size; i++)
			this->data[i] = pt.data[i];


	}
	//Опреатор присванивания
	point&  operator = (const point& pt) 
	{
		this->size = pt.size;
		if(this->data!=nullptr)
		delete[] this->data;

		
		this->data = new int[pt.size];
		for (int i = 0; i < pt.size; i++)
			this->data[i] = pt.data[i];

		return *this;

	}


	int operator [](int val) {

		if (val < this->size && val >= 0)
			return this->data[val];
		else {
			return -968248244;
		}
		
	}


	~point() {
		delete[]data;
		cout << "dead" << endl;
	}
	void Print() {
		for (int i = 0; i < size; i++) {
			cout << data[i]<<" ";
		}
		cout << endl;
	}
};

