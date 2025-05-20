#include <iostream>
using namespace std;

int tres_numeros_iguais (int n1 , int n2 , int n3 , int n4 , int n5 , int n6) {
	int somatorio = 0;
	somatorio = n1 + n2 + n3 + n4 + n5 + n6;
	if (n1 == n2 && n2 == n3 || n4 == n5 && n5 == n6) {
		return 15;
}
return somatorio;	
}



int main () {
	int v1 = 0 , v2 = 0 , v3 = 0 , v4 = 0 , v5 = 0 , v6 = 0;
	
	cout << "Informe 6 numeros: " << endl;
	cin >> v1;
	cin >> v2; 
	cin >> v3;
	cin >> v4;
	cin >> v5;
	cin >> v6;
	int soma = v1 + v2 + v3 + v4 + v5 + v6;
	int resposta = tres_numeros_iguais (v1 , v2 , v3 , v4 , v5 , v6);
	if (resposta == 15) {
		cout << "Retorno: " << resposta << endl;
		cout << "Soma eh: " << soma << endl;
		cout << "Otimo" << endl;
	}
		else {
		cout << "Retorno: " << resposta << endl;
		cout << "Soma eh: " << soma << endl;
		cout << "Excelente" << endl;
		}
		if (resposta%v6 == 0) {
		cout << "Alerta" << endl;
	}
}
		
