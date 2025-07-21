#include <iostream>
#include <cmath>
using namespace std;

struct circle{
	float radius;
};

void perimeter (float radius) { //assuming that pi = 3
	cout << "The area is: " << "" << 3 * pow (radius , 2) << endl; 
}

void area (float radius) {
	cout << "The perimeter is: " << 6*radius << endl; 
}

int main () {
	circle c1;
	cout << "What is the radius? " << endl;
	cin >> c1.radius;
	
	perimeter (c1.radius);
	area (c1.radius);
}
