//Faça	um programa que imprima na tela apenas os números ímpares entre 1 e 50.
#include <iostream>
using namespace std;

void alternative () {
	int option = 0;
	cout << "Choose an option: " << endl;
	cout << "1- Odd numbers" << endl;
	cout << "2 - Even numbers" << endl;
	cin >> option;
	
	switch (option) {
	
	case 1:
		for (int i = 1; i <= 50; i++) {
		if (i%2 != 0) {
			cout << i << ",";
		}
	}
	break;
	
	case 2:
		for (int i = 1; i <= 50; i++) {
		if (i%2 == 0) {
			cout << i << ",";
		}
	}
	break;
	
	default:
		alternative();
	 }
	
}

int main () {
	alternative();
	return 0; 
}
