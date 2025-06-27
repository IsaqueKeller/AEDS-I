#include <iostream>
using namespace std;

int main () {
	int number = 0;
	int counter = 0;
do {
	
	cout << "Type in a number: " << endl;
	cin >> number;	
	
	if (number > 0 and number %2 == 0) {
		counter++;
	}
} while (number != 0);
	cout << "There are " << counter << " numbers that are positive and even." << endl;
}
