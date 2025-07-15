#include <iostream>
using namespace std;

void sentence (float n , float m , int size) {
	float sum = 0;
	for (float i = 1; i <= size; i++) {
		cout << i/(2*i - 1); 
		sum += i/(2*i - 1);
	if (i != size) {
		cout << " + ";
	}
	
	} cout << endl;
	cout << "The value of S is: " << sum << endl;
}

int main () {
	float n;
	float m;
	int size;
	
	cout << "To which number you wish to see the sentence? " << endl;
	cin >> size;
	
	sentence (n , m , size);
}
