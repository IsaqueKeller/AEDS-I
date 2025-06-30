#include <iostream>
#include <math.h>
using namespace std;

int main () {
	const int size = 15;
	float *v1;
	
	v1 = new float [size];
	
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: " << endl;
		cin >> v1 [i];
		
			if (v1[i] < 0) {
				v1[i] = -1;
			}
			else {
			v1 [i] = sqrt (v1[i]);		
			}
			 
	}
	cout << endl;
	cout << "The square roots are: " << endl;
	
	for (int i = 0; i < size; i++) {
		cout << v1 [i] << endl;
	}
}
