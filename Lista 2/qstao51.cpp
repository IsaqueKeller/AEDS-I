#include <iostream>
using namespace std;

void factorial (int number) {
	int multiplication = 1;
	cout << number << "! = ";
	for (int i = number; i > 0; i--) {
		cout << i;
		multiplication *= i;
		if (i != 1) {
			cout << " x ";
		}
	} cout << endl;
	cout << number << "! = " << multiplication << endl;
}

int main () {
	int number;
	
	cout << "Type a number to see its factorial: " << endl;
	cin >> number;
	
	factorial (number);
	return 0;
}
