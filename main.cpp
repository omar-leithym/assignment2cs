#include <iostream>
#include "point.h"
using namespace std;
// Omar Leithy 900221663

point center(point* p, int n) { // function to determine the center of the point
	float totalX = 0, totalY = 0, averageX, averageY;
	for (int i = 0; i < n; i++) {
		totalX = totalX + p[i].getX(); // total for X is the current total + the next X
		totalY = totalY + p[i].getY(); // total for Y is the current total + the next Y
	}
	averageX = totalX / n; // average is total divided by the number of points
	averageY = totalY / n;
	point center(averageX, averageY); // returns a point object with the coordinates of the center
	return center;
}


void closest(point *clusterA, int size1, point *clusterB, int size2, point p) { // fucntion to determine which cluster a point is closer to
	point centerA = center(clusterA, size1); // calculates the center for cluster A
	point centerB = center(clusterB, size2); // calculates the center for cluster B
	if (p.getDistance(centerA) > p.getDistance(centerB)) {
		p.display();
		cout << " is closer to cluster B!" << endl; // displays the point and which cluster its closer to
	}
	else if (p.getDistance(centerA) < p.getDistance(centerB)) {
		p.display();
		cout << " is closer to cluster A!" << endl;
	}
	else {
		p.display();
		cout << " is the same distance to clusters A and B!" << endl;
	}
	
}

int main() {
	srand(time(NULL)); // sets the seed to the current time
	int const n = 200; // defining constants
	int const m = 20;
	point clusterA[n], clusterB[n], p[m]; //declaring the clusters
	for (int i = 0; i < n; i++) {
		clusterA[i].setX(float(rand()) / float((RAND_MAX)) * 20 + 70); // sets random values for clusters A and B
		clusterA[i].setY(float(rand()) / float((RAND_MAX)) * 20 + 70);
		clusterB[i].setX(float(rand()) / float((RAND_MAX)) * 20 + 20);
		clusterB[i].setY(float(rand()) / float((RAND_MAX)) * 20 + 20);
	}

	for (int j = 0; j < m; j++) {
		p[j].setX(float(rand()) / float((RAND_MAX)) * 95 + 5); // sets random values for the 20 points
		p[j].setY(float(rand()) / float((RAND_MAX)) * 95 + 5);
		closest(clusterA, 200, clusterB, 200, p[j]); // runs the point through the function
	}



}