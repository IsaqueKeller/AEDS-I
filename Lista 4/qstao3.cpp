#include <iostream>
using namespace std;

int function (int quantity , int *v1) {
	int number;
	for (int i = 0; i < quantity; i++) {
		cout << "Enter the " << i+1 << "  number: "  << endl;
		cin >> v1 [i];
	}
	cout << "Inform another number: " << endl;
	cin >> number;
	
	for (int i = 0; i < quantity; i++) {
		if (v1[i] != number) {
			cout << v1[i];
		}
	}
}

int main () {
	int quantity = 0;
	int *v1;
	
	cout << "Enter the quantity: " << endl;
	cin >> quantity;
	
	v1 = new int [quantity];
	
	function (quantity , v1);
}
