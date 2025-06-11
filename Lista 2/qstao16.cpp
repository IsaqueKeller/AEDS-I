#include <iostream>
using namespace std;
// show the sum and the quantity of numbers that are odd or even 
void odd_or_even (int number) {
	int i = 0;
	int result = 0;
	int counter_even , counter_odd = 0;
	do {
		cout << "Type in a number: " << endl;
		cin >> number;
		result += number;
		if (number%2 == 0) {
			counter_even++;
		}
		else {
			counter_odd++;
		}
		i++;
	} while (i < 10); 
	cout << "The sum is: " << result << endl;
	cout << "There are " << counter_even << " even numbers." << endl;
	cout << "There are " << counter_odd << " odd numbers." << endl;
}

int main () {
	int number = 0;
	odd_or_even(number);
}
