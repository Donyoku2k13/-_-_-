#include <iostream>
#include "circle_in_square.h"
using namespace std;



void main() {
	circle_in_square c(0, 0, 5);
	cout << c.getP() << endl;
	cout << c.getR() << endl;
	c.setX(5);
	c.getCircle();
	system("pause");
}
