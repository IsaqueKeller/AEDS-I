#include <iostream>
using namespace std;

void salary (float payment , float tax , float year) {
	double total = 0;
	for (int i = 0; i < year; i++) {
		total += payment*tax + payment;
		tax = tax*2;
	}
	cout << "Current salary: " << total << endl;
}

int main () {
	float payment;
	float tax = 0.015;
	float year;
	cout << "Inform the initial salary: " << endl;
	cin >> payment;
	
	cout << "Inform the year: " << endl;
	cin >> year;
	
	salary (payment , tax , year);
}
