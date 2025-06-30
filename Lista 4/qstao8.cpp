#include <iostream>
using namespace std;

int main (){
	
	const int size = 10;
	float *v1; 
	v1 = new float [size];
	
	for (int i = 0; i < size; i++) {
		cout << "Enter a number: " << endl;
		cin >> v1 [i];
	}
	
	cout << endl;
	cout << "The half is: " << endl;
	
	for (int i = 0; i < size; i++) {
		cout << v1[i]/2 << endl;
	}
}
