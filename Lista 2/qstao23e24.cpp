// Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

bool calculate_prime (int number) {
	if (number <= 1) {
		return false;
	}
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		} 
	}
	return true;
}

int main () {
	int number;

do {	
	cout << "Inform a number: " << endl;
	cin >> number;
} while (number < 0);

if(calculate_prime (number)) {
	cout << number << " is prime." << endl;
}
else {
	cout << number << " isn't prime." << endl;
	cout << "The number's dividers are: " << endl;
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			cout << i << endl;
		}
	}
}
return 0;
}
