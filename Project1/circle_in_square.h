#pragma once
#include "Circle.h"
#include "square.h"
#include "Point.h"

class circle_in_square:public square, public Circle {
public:
	circle_in_square(int x, int y, int r) :Circle(x, y, r), square(r * 2, x - r, y + r ) {
	}
	int getX()const {
		return Circle::getX();
	}
	int getY()const {
		return Circle::getY();
	}
	void setX(int x) {
		Circle::setX(x);
		square::setX(x-Circle::getR());
	}
	void setY(int y) {
		Circle::setY(y);
		square::setY(y+Circle::getR());
	}
	void setR(int r) {
		Circle::setR(r);
		square::setA(r*2);
		square::setX(square::getX() - r);
		square::setY(square::getY() + r);
	}
	void setA(int a) {
		Circle::setR(a/2);
		square::setA(a);
		square::setX(square::getX() - Circle::getR());
		square::setY(square::getY() + Circle::getR());
	}
};