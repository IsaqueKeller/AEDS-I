#include <iostream>
using namespace std;

void menu (int code , int quantity) {
		float total = 0;
		float cd100 = 0 , cd101 = 0 , cd102 = 0 , cd103 = 0 , cd104 = 0 , cd105 = 0;
		do {
	cout << "Type the code you want (0 to stop): " << endl;
	cin >> code;
	
	cout << "Type the quantity: " << endl;
	cin >> quantity;
	
	switch (code) {
		case 100:
			cd100 += 1.20 * quantity;
			break;
		
		case 101: 
			cd101 += 1.30 * quantity;
			break;
		
		case 102:
			cd102 += 1.50 * quantity;
			break;
		
		case 103:
			cd103 += 1.20 * quantity;
			break;
		
		case 104:
			cd104 += 1.30 * quantity;
			break;
		
			
		case 105:
			cd105 += 1 * quantity;
			break;
			
		default:
			cout << "Invalid code!" << endl;
}
} while (code != 0);
	cout << "Total: " << cd100 + cd101 + cd102 + cd103 + cd104 + cd105 << endl;
	if (cd100 > 0) {
		cout << "Hot dog: " << cd100 << endl;
	}
	if (cd101 > 0) {
		cout << "Simple Bauru: " << cd101 << endl;
	}
	if (cd102 > 0) {
		cout << " Bauru with egg: " << cd102 << endl;
	}
	if (cd103 > 0) {
		cout << "Hamburguer: " << cd103 << endl;
	}
	if (cd104 > 0) {
		cout << "Cheeseburguer: " << cd104 << endl;
	}
	if (cd105 > 0) {
		cout << "Soda: " << cd105 << endl;
	}
}
int main () {
	int code , quantity; 
	cout << "Item       	   Code      Price" << endl;
	cout <<	"Hot dog     	   100       1.20" << endl;
	cout <<	"Simple Bauru 	   101       1.30" << endl;
	cout <<	"Bauru with egg     102       1.50" << endl;
	cout <<	"Hamburguer         103       1.20" << endl;
	cout <<	"Cheeseburguer      104       1.30" << endl;
	cout <<	"Soda		   105       1.00" << endl;
	
	cout << endl;
	menu (code , quantity);


}
