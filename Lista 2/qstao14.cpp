#include <iostream>
using namespace std;

void multiplication (int number) {
	int i = 1;
	int result = 0;
	while (i <= 10) {
		result = number*i;
		cout << result << endl;
		i++;
	}	
}

int main () {
	int number = 0;
	
	do {
	cout << "Inform a number to know its multiplication table: " << endl;
	cin >> number;
} while (number > 10 or number < 1);
	
	multiplication (number);
}
