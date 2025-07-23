#include <iostream>
using namespace std;

struct vector {
	float x;
	float y;
	float z;
	
	void coords () {
		cout << "X: " << endl;
		cin >> x;
		
		cout << "Y: " << endl;
		cin >> y;
		
		cout << "Z: " << endl;
		cin >> z;
	}
	
	void product (vector v1 , vector v2) {
		float result = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
		cout << "The scalar product is: " << result << endl;
	}
};

int main () {
	vector v1;
	vector v2;
	
	cout << "v1: " << endl;;
	v1.coords();
	
	cout << "v2: " << endl;
	v2.coords();
	
	v1.product(v1, v2);
}
