#include <iostream>
#include <cmath>
using namespace std;

struct coord {
	float x;
	float y;
	
	void points () {
		cout << "Enter the x: " << endl;
		cin >> x;
		
		cout << "Enter the y: " << endl;
		cin >> y;
		
	}
};

struct triangle {
	float sp = 0;		
	float side_ab;
	float side_bc;
	float side_ac;
	
	void distance (coord a , coord b , coord c) {
		side_ab = sqrt (pow((a.x - b.x) , 2) + pow((a.y - b.y) , 2));
		side_bc = sqrt(pow((b.x - c.x) , 2) + pow ((b.y - c.y) , 2));
		side_ac = sqrt (pow((a.x - c.x) , 2) + pow((a.y - c.y) , 2));
		sp = (side_ab + side_bc + side_ac)/2;
	}
	void area (coord a , coord b , coord c ) {
		float result = sqrt(sp*(sp-side_ab)*(sp-side_bc)*(sp-side_ac));
		cout << "The area is: " << result << endl; 
	}
};

int main () {
	triangle t1;
	coord a;
	coord b;
	coord c;
	
	cout << "Point a: " << endl;
	a.points();
	
	cout << "Point b: " << endl;
	b.points();
	
	cout << "Point c: " << endl;
	c.points();
	
	t1.distance(a,b,c);
	t1.area(a,b,c);
}
