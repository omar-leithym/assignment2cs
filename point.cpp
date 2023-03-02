#include "point.h"
#include <iostream>
#include <cmath>
point::point() { // default constructor sets the value of x and y to 0
	x = 0;
	y = 0;
}

point::point(float x1, float y1) { //constructor with parameters sets x and y to the values received
	x = x1; 
	y = y1;
}

void point::setX(float n) { // function sets x to the number received
	x = n;
}

void point::setY(float n) { // function sets y to the number received
	y = n;
}

float point::getX() const { // function displays X
	return x;
}

float point::getY() const { // function displays Y
	return y;
}

void point::display() const {
	std::cout << "X :" << x << " Y: " << y; // function displays the x and y coordinates
}

float point::getDistance(const point &p) {
	return sqrt(pow(x - p.x ,2) + pow(y - p.y, 2)) ; // function calculates between the current point and another point
}