#include <iostream>
using namespace std;

float funcaosoma (float v1 , float v2 , float v3) {
	return v1 + v2 + v3;
}

int main (void) {
	float a = 0;
	float b = 0;
	float c = 0;
	cout << "Valor de a: " << endl;
	cin >> a;
	
	cout << "Valor de b: " << endl; 
	cin >> b;
	
	cout << "Valor de c: " << endl;
	cin >> c;
	
	cout << "Resultado da soma: " << funcaosoma(a , b ,c) << endl;
	
}
