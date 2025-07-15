#include <iostream>
using namespace std;

int main () {
	int number = 0;
	int switch_number = 0;
	int digit = 0;
	
	do {
	cout << "Type a number: " << endl;
	cin >> number;
	} while (number < 0);
	
	while (number > 0) {
		digit = number % 10;
		switch_number = switch_number * 10 + digit;
		number = number/10;
	} 
	cout << "The inverted number is: " << switch_number << endl;
	return 0;
}
