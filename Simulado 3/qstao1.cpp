#include <iostream>
using namespace std;

struct sargento {
	string nome;
	int idade;
	
	void preenchesargento () {
		cout << "Nome do Sargento: " << endl;
	cin >> nome;
	
	cout << "Idade do Sargento: " << endl;
	cin >> idade;
	cout << endl;
	}
};

struct soldado {
	string nome;
	int idade;
	
	void preenchesoldado (int tam , soldado *soldier , string soldadoaleat) {
	for (int i = 0; i < tam; i++) {
		cout << "Qual e o nome do soldado: " << endl;
		cin >> soldier[i].nome;
	
		cout << "Qual e a idade do soldado: " << endl;
		cin >> soldier[i].idade;
		
		if (soldadoaleat == soldier[i].nome) {
			cout << "Soldado esta na tropa" << endl;
			cout << endl;
			}
			else {
				cout << "Soldado nao esta na tropa" << endl;
				cout << endl;
			}
		}
	}
};

struct tropa{
	string name;
	sargento s1;
	soldado *soldier;
	int tam;
};

int idadecheck (tropa t1 , int number) {
	int counter = 0;
	for (int i = 0; i < t1.tam; i++) {
		if (t1.soldier[i].idade == number) {
			counter++;	
		}
	}
	return counter;
}

int main () {
	tropa t1;
	string soldadoaleat;
	sargento s1;
	soldado sol1;
	int number = 0;
	
	cout << "Nome da tropa: " << endl;
	cin >> t1.name;
	
	cout << "Quantos soldados sao da tropa? " << endl;
	cin >> t1.tam;
	
	s1.preenchesargento();
	
	t1.soldier = new soldado [t1.tam];
	
	cout << "Informe um nome para verificar se o soldado esta ta na tropa: " << endl;
	cin >> soldadoaleat; 
	
	sol1.preenchesoldado(t1.tam , t1.soldier , soldadoaleat);
	cout << endl;
	
	cout << "Digite um numero: " << endl;
	cin >> number;
	
	int result = idadecheck(t1 , number);
	cout << result << " soldado(s) tem a idade selecionada" << endl;
	return 0;
}
