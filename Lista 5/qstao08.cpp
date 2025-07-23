#include <iostream>
#include <cmath>
using namespace std;

struct point2d {
	float x;
	float y;
	
	void coords () {
		cout << "What is the coord of x: " << endl;
		cin >> x;
		
		cout << "What is the coord of y: " << endl;
		cin >> y;
	}
	
	void distance (point2d & p2) {
	 	cout << "The distance is: " << sqrt (pow((p2.x - x) , 2) + pow ((p2.y - y) , 2)) << endl;
	}	
};


int main () {
	point2d p1;
	point2d p2;
	
	p1.coords();
	p2.coords();
	
	p1.distance(p2);
}
