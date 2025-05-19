#include <iostream>
using namespace std;

void percent (int balance) {
	 int cod = 0;
		if (balance <= 200) {
			cod = 0;
			
		}
		else if (balance <= 400){
			cod = 1;		
	}	
		else if(balance <= 600) {
			cod = 2;
		} 
		else if (balance > 600) {
				cod = 3;
		}
		switch(cod) {
			case 0: 
				cout << "No credit" << endl;
				break;
				
			case 1: 
				cout << "20% of the balance" << endl;
				cout << 0.2 * balance << endl;
				break;
				
			case 2: 
				cout << "30% of the balance" << endl;
				cout << 0.3 * balance << endl;
				break;
				
			case 3: 
				cout << "40% of the balance" << endl;
				cout << 0.4 * balance << endl;
				break;
		
		}
}

int main () {
	int balance = 0;
	cout << "What is your medium balance" << endl;
	cin >> balance;
	percent (balance);
	return 0;
}
