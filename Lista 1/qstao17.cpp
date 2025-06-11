//Faça um programa que receba como entrada um numero qualquer do usuário e informe se o número é positivo ou negativo.
#include <iostream>
using namespace std;

void funcaogeral (float numero) {
	if (numero < 0) {
		cout << "O numero eh negativo" << endl;
	}
	else if (numero > 0) {
		cout << "O numero eh positivo" << endl;
	}
	else {
		cout << "O numero eh nulo" << endl;
	} 	
}

int main (void) {
	float a = 0;
	
	cout << "Informe um numero: " << endl;
	cin >> a;
	
	funcaogeral (a);
}
