#include <iostream>
using namespace std;

void chart (float value_store , int quantity , float value_bakery) {
	cout << "Store almost two - Price tag: " << endl;
	for (int i = 1; i <= 50; i++) {
		cout << i << ": "  << i*value_store << endl;
	}
	cout << endl;
	
	cout << "Bakery hard bread - Price tag: " << endl;
	for (int j = 1; j <= 50; j++) {
		cout << j << ": " << j*value_bakery << endl;
	}
	cout << endl;
	
	cout << "Little sell of your Ze - Price tag: " << endl;
	float product = 0;
	int counter = 1;
	float total = 0;
	float money = 0;
	
	do {
	cout << "Product " << counter << endl;
	cin >> product;
	total += product;
	counter++;
}while (product != 0);
	cout << "The total is: " << total << endl;
	
	do {
	cout << "How much money the customer gave? " << endl;
	cin >> money;
	
	if (money < total) {
		cout << "Insuficient money" << endl;
	}
} while (money < total); 

	cout << "The change is: " << money - total;
}

int main (){
	float value_store = 1.99;
	int quantity;
	float value_bakery = 0.18;
chart (value_store, quantity, value_bakery);
}
