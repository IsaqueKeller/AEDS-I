#include <iostream>
using namespace std;

void multiplication (int number , int start , int finish) {
	for (int i = start; i <= finish; i++){
		cout << number << " X " << i << " = " << number*i << endl;
	}
}

int main () {
	int number;
	int start , finish;
	cout << "----- Multiplication table -----" << endl;
	cout << "What number do you wish to multiplicate? " << endl;
	cin >> number;
	
	cout << "Initial number: " << endl;
	cin >> start;
	
	do {
		cout << "Final number: " << endl;
		cin >> finish;
	} while (finish < start);
	multiplication (number , start , finish);
}
