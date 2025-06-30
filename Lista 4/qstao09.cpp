#include <iostream>
#include <math.h>
using namespace std;

int main () {
	const int size = 10;
	double *v1;
	
	v1 = new double [size];
	
	for (int i = 0; i < size; i++){
		cout << "Enter a number: " << endl;
		cin >> v1 [i];
		v1 [i] = pow ((v1[i]), 3);
	}
	
	cout << endl;
	cout << "The results are: " << endl;
	
	for (int i = 0; i < size; i++) {
		cout << v1[i] << endl;
	}
}
