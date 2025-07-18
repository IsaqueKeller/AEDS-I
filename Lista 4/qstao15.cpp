#include <iostream>
using namespace std;

void fill_vector (int size , int *vector) {
	int number;
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: " << endl;
		cin >> vector[i];
	}
	cout << "Enter a different number: " << endl;
	cin >> number;
	
	int *numvec;
	int count = 0;
	numvec = new int [size];
	for (int i = 0; i < size; i++) {
		if (number == vector[i]) {
		numvec[count] = i;
		count++;
		}
	}
	
	if (count > 0) {
		cout << "The number is in position(s): " << endl;
		for (int i = 0; i < count; i++) {
		cout << numvec[i] << " ";
		}
	}
	else {
		cout << "The number isn't in the vector" << endl;
	}
	
} 

int main () {
	int size;
	int *vector;
	
	cout << "Enter a size: " << endl;
	cin >> size;	
	
	vector = new int [size];
	fill_vector (size , vector);
}
