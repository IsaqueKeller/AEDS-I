#include <iostream>
using namespace std;

int multiplication (int n , int exponent) {
	
	if (exponent == 0) {
		return 1;
	}
	else {
		return n * multiplication (n , exponent-1);  
	}
}

int main () {
	int n = 0;
	int exponent = 0;
	
	cout << "Type in a number: " << endl;
	cin >> n;
	
	cout << "Type in an exponent: " << endl;
	cin >> exponent;
	
	int result = multiplication (n , exponent);
	cout << "The result is: " << result << endl;
}
