#include <iostream>
using namespace std;

int factorial (int number) {
	if (number == 1) {
		return 1;
	}
	else {
		return number * factorial(number -1);
	}
}

int main () {
	int number = 0;
	
	do {
		cout << "Type in a number: " << endl;
		cin >> number;
	} while (number <= 0);
	int result = factorial (number);
	
	cout << "The factorial is: " << endl;
	cout << number << " ! = " << result; 
}
