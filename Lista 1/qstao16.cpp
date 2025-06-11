//Faça um programa que troca os valores de a e b, se a for menor que b. a = 2 b = 7   a = 7 b = 2
#include <iostream>
using namespace std;

float funcaogeral (float a , float b) {
	float troca = 0;
    troca = a;
    a = b; 
	b = troca;
	
	cout << "a: " << a << endl << "b: "<< b << endl;
	
	return 0;
}

int main(void) {
	float v1 = 0;
	float v2 = 0;
	
	cout << "Informe o valor de a: " << endl;
	cin >> v1;
	
	cout << "Informe o valor de b: " << endl;
	cin >> v2;
	
	if (v1 < v2) {
	funcaogeral (v1, v2);
	}
}
