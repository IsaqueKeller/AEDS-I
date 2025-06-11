#include <iostream>
#include <math.h>

using namespace std;
int main(void) {
	// f(x) = x³ + x² - 2*x + 1 
float x , y = 0; 
cout << "Valor de x: " << endl; 
cin >> x;

y = pow(x , 3) + pow(x , 2) - 2*x + 1;
cout << y << endl; 
}


