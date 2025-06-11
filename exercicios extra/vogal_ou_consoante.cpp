#include <iostream>
using namespace std;

void alfabeto (char letra) {
	switch (letra) {
		
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "A letra eh uma vogal" << endl;
		break;
	default:
		
		cout << "A letra eh uma consoante" << endl;
}
}

int main () {
	char letra;
	do {
	cout << "Informe uma letra" << endl;
	cin >> letra;
	float letter = letra;
		if (!((letra >= 'a') and (letra <= 'z'))) {
		}
	} while (!((letra >= 'a') and (letra <= 'z')));
 	alfabeto (letra);	
	return 0;
	}
	 


