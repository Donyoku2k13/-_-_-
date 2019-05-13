#pragma once
#include <iostream>
using namespace std;
class point {
	int x;
	int y;
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
	int getY()const {
		return y;
	}
	int getX()const {
		return x;
	}
	void setPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void getPoint()const {
		cout << getX() << " " << getY() << endl;
	}

};
