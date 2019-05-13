#pragma once
#include <Math.h>
#include "Point.h"
#define PI 3.14159265358979
class Circle : public point {
	int r;
public:
	Circle(int x, int y, int r):point( x , y) {
		this->r = r;
	}
	void setR(int r) {
		this->r = r;
	}
	int getR()const {
		return r;
	}
	void getCircle()const {
		cout << getR() << " " << getX() << " " << getY()<<endl;
	}
	size_t getS()const {
		return PI * pow(r, 2);
	}
};