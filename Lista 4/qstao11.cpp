#include <iostream>
#include <cmath>
using namespace std;

int main () {
	const int size = 8;
	double *v1;
	
	v1 = new double [size];

	for (int i = 0; i < size; i++) {
		cout << "Enter a number: " << endl;
		cin >> v1[i];
		
		if (v1[i] > 0) {
		v1 [i] = log10 (v1[i]);	
		}
		else {
			v1 [i] = -1;
		}
		
	}
	cout << endl;
	cout << "The logarithms are: " << endl;
	
	for (int i = 0; i < size; i++) {
		cout << v1 [i] << endl;
	}
}
