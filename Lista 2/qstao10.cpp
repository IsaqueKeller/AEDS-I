#include <iostream>
#include <string>
using namespace std;

void user_function (string user , string password) {
	do {
	cout << "Inform your username: " << endl;
	cin >> user;
	
	cout << "Inform your password: " << endl;
	cin >> password;

	} while (user == password and cout << "Error" << endl); 
}

int main () {
	string user;
	string password;
	
	user_function (user , password);
}
