#include <iostream>
using namespace std;

void age_average (int quantity) {
	int age;
	int total = 0;
	int i = 0;
	
	do {
	
	do {
		cout << "What is your age? " << endl;
		cin >> age;
} while (age <= 0);
	
		total += age;
		i++; 
	} while (i < quantity);
	
	int average = total/quantity;
	
	cout << "The average is: " << average << endl;
	
	if (average <= 25) {
		cout << "The group is young." << endl;
	}
	else if (average <= 60) {
		cout << "The group is adult." << endl;
	}
	else {
		cout << "The group is old." << endl;
	}
}

int main () {
	int quantity = 0;
	do{
		cout << "How many people? " << endl;
		cin >> quantity;
	} while (quantity <= 0);

	age_average(quantity);
	return 0;	
}
