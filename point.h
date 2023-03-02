#pragma once

class point {
	private:
		float x, y; // private variables
	public:
		point();
		point(float x1, float y1); // declaration for functions (Their description is in the cpp file)
		void setX(float n);
		void setY(float n);
		float getX() const;
		float getY() const;
		void display() const;
		float getDistance(const point &p);
};
