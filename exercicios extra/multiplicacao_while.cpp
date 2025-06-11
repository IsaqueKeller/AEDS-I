#include <iostream>
using namespace std;

int multiplication (int n , int exponent) {
	int i = 1;
	int r = 1;
	while (i <= exponent) {
		r*= n;
		i++;
	}
	return r;
}

int main () {
	int exponent = 0;
	int n = 0;
	
	cout << "Type in a number: " << endl;
	cin >> n;
	
	cout << "Type in the exponent: " << endl;
	cin >> exponent;
		
	int result = multiplication (n , exponent);
	cout << "The result is: " << result << endl;
}
