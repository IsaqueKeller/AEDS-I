#include <iostream>
using namespace std;

int sum_and_greater (float number , int quantity) {
float greater = -999999;
float smallest = 999999;
float sum = 0;
for (int i = 0; i < quantity; i ++) {

		cout << "Type in a number: " << endl;
		cin >> number;
		sum += number;	
		if (number > greater) {
			greater = number;
		}
		else if (number < smallest) {
			smallest = number;
		}
}
cout << "The sum is: " << sum << endl;
cout << "Greater: " << greater << endl;
cout << "Smallest: " << smallest << endl;
}

int main () {
	float number = 0;
	int quantity = 0;
	cout << "Type in the quantity: " << endl;
	cin >> quantity;

sum_and_greater (number , quantity);
}
