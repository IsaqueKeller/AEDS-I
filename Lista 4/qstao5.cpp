#include <iostream>
using namespace std;

void function (int *v1 , int size1) {
	int number;
	for (int i = 0; i < size1; i++) {
		cout << "Enter a number: " << endl;
		cin >> v1[i];
	}
	cout << "Enter another number: " << endl;
	cin >> number; 
	
	int counter = 0;
	for (int i = 0; i < size1; i++) {
		if (number == v1[i]) {
			counter++;
		}
	}
	cout << "The chosen number appears " << counter << " times." << endl;
}

int main () {
	int *v1; 
	int size1;
	
	cout << "Enter the vector's size: " << endl;
	cin >> size1;
	
	v1 = new int [size1];
	
	function (v1 , size1);
}
