#include <iostream>
using namespace std;

void greatest (int quantity){
	float number = 0;
	float greater1 , greater2 , greater3 = 0;
	int i = 1;
	do {
		cout << "Inform a number: " << endl;
		cin >> number;
	if (i == 1) {
		greater1 = number;
	}
	else if (number > greater1) {
		greater3 = greater2;
		greater2 = greater1;
		greater1 = number;	
	}
	else if (number > greater2) {
		greater3 = greater2;
		greater2 = number;
	}	
	else if (number > greater3) {
		greater3 = number;
	}

	i++;	
	} while (i <= quantity);
	cout << "greater1: " << greater1 << " greater2: " << greater2 << " greater3: " << greater3 << endl;
	cout << "The sum is: " << greater1 + greater2 + greater3 << endl;
}

int main () {
	int quantity = 0;
	cout << "Inform the quantity: " << endl;
	cin >> quantity;
	greatest (quantity);
	
	return 0;	
}
