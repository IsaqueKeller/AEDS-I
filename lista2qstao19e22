#include <iostream>
using namespace std;

int fat (int number) {
	if (number == 0) {
		return 1;
	}
	else {
		return number* fat(number-1);
	}
}

int main () {
	int number = 0;
	
	do {
	
	cout << "Type in a number to know its fatorial: " << endl;
	cin >> number;
} while (number > 16 or number < 0);

	int result = fat (number);
	cout << "Fatorial: " << number << endl;
	cout << number << "! = ";
	for (int i = number; i > 0; i--) {
		cout << i;
		if (i > 1) {	
		cout << ".";	
	}	
	else {
		cout << " = " << result;
	}
}
}
