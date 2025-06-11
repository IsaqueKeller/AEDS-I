#include <iostream>
using namespace std;

int addition (int number , int quantity) {
quantity = number - 1;
for (int i = 1; i <= quantity; i ++) {
	
	if (quantity == 0) {
		return 0;
	}
	else {
		return number + addition (number-1 , quantity-1);
	}
	}
}

int main () {
	int number = 0;
	int quantity = 0;
	
		cout << "Type in a number: " << endl;
		cin >> number;
	
	int result = addition (number , quantity);	
	cout << "The result is: " << result << endl; 
}
