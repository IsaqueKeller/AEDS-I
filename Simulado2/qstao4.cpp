#include <iostream>
using namespace std;

int function (int num1 , int num2) {
int product = 1;
	
	
	if (num2 > 9) {
		return 0;
	}
	else {
	
	for (int i = 1; i <= num2; i++) {
	product *= num1;
		}
	}
		return product;
}

int main () {
	int num1;
	int num2;
	int *vec;
	int quantity = 0;
	
	cout << "How many times you wish to see the function in action? " << endl;
	cin >> quantity;
	
	vec = new int [quantity];
	for (int i = 0; i < quantity; i ++) {
		cout << "Enter num1: " << endl;
		cin >> num1;
		
		cout << "Enter num2: " << endl;
		cin >> num2;
		
		vec [i] = function(num1 , num2);
	}
	for (int i = 0; i < quantity; i++) {
        cout << "Result " << i + 1 << ": " << vec[i] << endl;
    }
    delete[] vec;
    return 0;
}
