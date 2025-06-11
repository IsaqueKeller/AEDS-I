#include <iostream>
using namespace std;

void real_number (int number) {
	if (number > 0) {
		cout << "The number is positive" << endl;
	}
	else {
		cout << "The number is negative" << endl;
	}
}

int main () {
	int number = 0;
	
	cout << "Type in a number: " << endl; 
	cin >> number;
	real_number (number);
}
