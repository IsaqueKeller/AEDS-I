#include <iostream>
using namespace std;

void interval (float number) {
	int counter1 = 0 , counter2 = 0 , counter3 = 0 , counter4 = 0;
	do {
		cout << "Enter a number: " << endl;
		cin >> number;
		
		if (number >= 0 and number <= 25) {
			counter1++;
		}
		else if (number > 25 and number < 51) {
			counter2++;
		}
		else if (number > 50 and number <= 75) {
			counter3++;
		}
		else if (number < 100) {
			counter4++;
		}
	} while (number > 0);
	cout << "There were " << counter1 << " numbers in interval 1" << endl;
	cout << "There were " << counter2 << " numbers in interval 2" << endl;
	cout << "There were " << counter3 << " numbers in interval 3" << endl;
	cout << "There were " << counter4 << " numbers in interval 4" << endl;
}

int main () {
	float number;
	interval (number);	
}
