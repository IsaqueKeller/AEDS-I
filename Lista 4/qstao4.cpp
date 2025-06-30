#include <iostream>
using namespace std;

void function (int *v1 , int size1) {
	int greater = 0;
	int smaller = ;
	for (int i = 0; i < size1; i++) {
		cout << "Enter a number: " << endl;
		cin >> v1 [i];
		if (v1[i] > greater) {
			greater = v1[i];
		}
		else if (v1[i] < smaller) {
			smaller = v1[i];
		}
	}
	cout << smaller << endl;
	cout << greater << endl;
	
}

int main () {
	int *v1; 
	int size1;
	
	do{
	cout << "Enter the size of the vector: " << endl;
	cin >> size1;
} while (size1 <= 0);
	v1 = new int [size1];
	function (v1, size1);
}
