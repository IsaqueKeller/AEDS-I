
#include <iostream>
#include <math.h>
using namespace std;
/* F(x) = ax² + bx + c 
 delta = b² - 4ac
x = (- b +- √delta)/2a */
void quadratic_function (float a , float b , float c) {
	float delta = 0;
	float x1 = 0;
	float x2 = 0;
	delta = pow (b , 2) - 4*a*c;
	
	x1 = (- b + sqrt(delta)) / 2*a;
	x2 = (- b - sqrt(delta)) / 2*a;
	if (delta >= 0){
			cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;
	}
	else {
		cout << "There isn't an exact square root" << endl;
	}

}

int main () {
	float v1 = 0 , v2 = 0 , v3 = 0;
	
	cout << "Type the value of a: " << endl;
	cin >> v1;
	
	cout << "Type the value of b: " << endl;
	cin >> v2;
	
	cout << "Type the value of c: " << endl;
	cin >> v3;
	
	quadratic_function (v1 , v2 , v3);
}
