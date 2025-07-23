#include <iostream>
using namespace std;

struct bankaccount {
	string numaccount;
	float balance;
	
	void deposit () {
		float money;
		cout << "How much you want to deposit? " << endl;
		cin >> money;
		
		cout << "Your balance now is: " << balance + money << endl;
	}
	void withdrawal () {
		float take;
		cout << "How much you want to withdrawal? " << endl;
		cin >> take;
		
		cout << "Your balance now is: " << balance - take << endl;
	}
};

int main () {
	bankaccount b1;
	int option;
	
	cout << "What is your account's number? " << endl;
	cin >> b1.numaccount;
	
	cout << "What is your balance? " << endl;
	cin >> b1.balance;
	
	cout << "Do you wish to withdrawal (1) or deposit money(2)? " << endl;
	cin >> option;
	
	cout << endl;
	switch (option) {
		case 1:
		b1.withdrawal();
		break;
		
		case 2:
			b1.deposit();
			break;
			
		default:
		cout << "Invalid" << endl;
		break;
	}
}
