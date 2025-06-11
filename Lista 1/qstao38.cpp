#include <iostream>
using namespace std;

int asking_order () {
	int code = 0;
	
	cout << "What do you want to order? (Inform the code)" << endl;
	cin >> code;
	return code;
}

int number () {
	int quantity = 0;
	
	cout << "How many do you want?" << endl;
	cin >> quantity;
	return quantity;
}

void calculate_function () {
	
	bool order = true;
	while (order) {
	

		int code = 0 , quantity = 0;
		code = asking_order();
		quantity = number ();
		
		
		
		switch (code) {
			case 100: 
				cout << "The price is: " << quantity* 2.20 << endl;
				order = false; 	
				break;
		
			case 101:
				cout << "The price is: " << quantity *3.30 << endl;
				order = false;
				break;
				
			case 102:
				cout << "The price is: " << quantity *3.50 << endl;
				order = false;
				break;
				
			case 103: 
				cout << "The price is: " << quantity * 5.20 << endl;
				order = false;
				break;
				
			case 104: 
				cout << "The price is: " << quantity * 7.30 << endl;
				order = false;
				break;
				
			case 105: 
				cout << "The price is: " << quantity * 2.00 << endl;
				order = false;
				break;
					
		}
	}
}


int main () {

	
	cout << "-----------------   Menu  -----------------" << endl;
    cout << "Especification:     Code:      Price" << endl;
	cout << "Hot dog             100        2.20 " << endl;
	cout << "Bauru simple        101        3.30" << endl;
	cout << "Bauru with egg      102        3.50" << endl; 
	cout << "Hamburguer          103        5.20" << endl;
	cout << "Chesseburguer       104        7.30" << endl;
	cout << "Soda                105        2.00" << endl;

	calculate_function();
} 


