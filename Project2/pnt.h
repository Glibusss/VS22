#pragma once
#include <iostream>
using namespace std;
class pnt
{
protected:
	int x;
	int y;


public:
	pnt() {
		x = 0;
		y = 0;
	}
	pnt(int x, int y) {
		this->x = x;
		this->y = y;

	}
	pnt(const pnt& p) {
		this->x = p.x;
		this->y = p.y;
	}
	pnt& operator ++() {
		this->x++;
		this->y++;
		return *this;
	}
	pnt& operator ++(int val){
		pnt temp(*this);
			this->x++;
			this->y++;
			return temp;
		}



	bool operator ==(const pnt& p) {
		return (this->x == p.x && this->y == p.y);
	}
	bool operator !=(const pnt& p) {
		return !(this->x == p.x && this->y == p.y);
	}
	pnt& operator =(const pnt& p) {

		this->x = p.x;
		this->y = p.y;
		return *this;
	}
	pnt& operator+(const pnt& p) {
		pnt temp(this->x+p.x,this->y+p.y);
		return temp;
	}

	~pnt() {
		cout << "Minus tochka" << endl;
	}
	void Print() {
		cout << x << " " << y << endl;
	}
};

