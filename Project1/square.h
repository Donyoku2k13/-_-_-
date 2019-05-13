#pragma once
#include "Circle.h";
#include "Point.h"
class square: public point {
	int a;
public:
	square(int a, int x, int y):point(x,y) {
		this->a = a;
		setY(y);
		setX(x);
	}
	void setA(int a) {
		this->a = a;
	}
	int getA()const {
		return this->a;
	}
	void getSquare()const {
		cout << getA() << " " << getX() << " " << getY() << endl;
	}
	size_t getS(int a) {
		return pow(a, 2);
	}
	size_t getP() {
		return a * 4;
	}

};