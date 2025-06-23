#include <iostream>
using namespace std;

void chart (float value , int quantity) {
	cout << "Price tag: " << endl;
	for (int i = 1; i <= 50; i++) {
		cout << i << ": "  << i*value << endl;
	}
}

int main (){
	float value = 1.99;
	int quantity;

chart (value, quantity);
}
