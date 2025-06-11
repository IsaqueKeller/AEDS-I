#include <iostream>
using namespace std;

void product (int code , int quantity) {
	cout << "What is the code: " << endl;
	cin >> code;
	
	cout << "What is the quantity: " << endl;
	cin >> quantity;
	
	
	switch (code) {
		case 1001 :
			cout << "The price is: " << quantity * 5.32 << endl;
			break;
			
		case 1324: 
			cout << "The price is: " << quantity * 6.45 << endl;
			break;
			
		case 6548: 
			cout << "The price is: " << quantity * 2.37 << endl;
			break;
			
		case 987: 
			cout << "The price is: " << quantity * 5.32 << endl;
			break;
			
		case 7623:
			cout << "The price is: " << quantity * 6.45 << endl;
			break;
			
			default:
				product (code , quantity);
	}
}

int main () {
	int code = 0 , quantity = 0;
	cout << "Codes: " << endl;
	cout << "1001 , 1324 , 6548 , 0987 , 7623" << endl;
	
	product(code , quantity);
}
