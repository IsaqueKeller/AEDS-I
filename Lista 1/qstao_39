//Escreva uma função sem retorno que receba por parâmetro um inteiro referente ao mês e que imprima a estação (verão, outono, inverno, primavera) do ano correspondente.
#include <iostream>
using namespace std;

void season_function () {
int month = 0;
	cout << "Type a month to see what season it is: " << endl;
	cin >> month;

	if (month == 12 || month < 3 and month >0) {
		cout << "It is summer!" << endl; }
	
		else if ((month < 6) and (month >= 3)) {
			cout << "It is fall!" << endl; 
		}
	
		else if ((month < 9) and (month > 6)) {
			cout << "It is winter!" << endl;
		}
	
		else if ((month < 12) and (month > 0)) {
			cout << "It is spring!" << endl; 
		}
		else {
			cout << "Invalid" << endl;
			season_function();
		} 
	}

int main () {
	
season_function ();	
}
