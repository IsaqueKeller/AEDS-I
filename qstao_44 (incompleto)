//Escrever um algoritmo que le um conjunto de 4 valores i, a, b, c, onde i e um valor inteiro e positivo e a, b, c, sao quaisquer valores reais e os escreva
#include <iostream>
using namespace std;

void numbers (int i , float a , float b , float c) {
	if (i == 1) { //ordem crescente
		if ((a > b) and (a > c) and (b > c)) {		
		cout << c << b << a << endl;
			}
			else if (b > a and a > c) {
				cout << c << a << b << endl;
			}
			else if (b > a and b > c and c > a){
				cout << a << c << b << endl;
			}
			else  if (a > c and c > b){
				cout << b << c << a << endl; 
			}
			else if (c > a and a > b) {
				cout << b << a << c << endl;
			}
			else if (c > a and a < b) {
				cout << a << b << c << endl;
			}
		}
	
	else if (i == 2) { //ordem decrescente
		if (a < b and b < c) {		
		cout << c << b << a << endl;
			}
			else if (b < a and a < c) {
				cout << c << a << b << endl;
			}
			else if (b < a and b < c ){
				cout << a << c << b << endl;
			}
			else  if (a < c and c < b){
				cout << b << c << a << endl; 
			}
			else if (c < a and a < b) {
				cout << b << a << c << endl;
			}
			else if (c < a and a < b) {
				cout << a << b << c << endl;
			}
	}
	else if (i == 3) { //numero maior no meio
		if (a > b and b > c) {
			cout << b << a << c << endl;
		}
		else if (b > a and a > c) {
			cout << a << b << c << endl;
		}
		else if (c > a and a > b) {
			cout << a << c << b << endl;
		}
	}
}



int main (void) {
	int i = 0;
	float v1 = 0 , v2 = 0 , v3 = 0;
	
	cout << "Inform the value of i: 1 , 2 or 3 " << endl;
	cin >> i;
	
	cout << "Inform the value of a: " << endl;
	cin >> v1;
	
	cout << "Inform the value of b: " << endl;
	cin >> v2;
	
	cout << "Inform the value of c: " << endl;
	cin >> v3;
	
	numbers (i , v1 , v2 , v3 );
		
}
