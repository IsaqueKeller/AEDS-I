#include <iostream>
using namespace std;

struct rectangle {
	float height;
	float width;
};

void area (float rec1_height , float rec1_width) {
	cout << "Area is: " << rec1_height * rec1_width << endl;
}

void perimeter (float rec1_height , float rec1_width) {
	cout << "Perimeter is: " << rec1_height * 2 + rec1_width * 2 << endl;
}

int main () {
	rectangle rec1;
	cout << "What is the height of the rectangle? " << endl;
	cin >> rec1.height;
	
	cout << "What is the width of the rectangle? " << endl;
	cin >> rec1.width;
	
	area (rec1.height , rec1.width);
	perimeter (rec1.height , rec1.width);
}
