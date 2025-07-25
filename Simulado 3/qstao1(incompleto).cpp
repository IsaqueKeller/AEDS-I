#include <iostream>
using namespace std;

struct sargento {
	string nome;
	int idade;
};

struct soldado {
	string nome;
	int idade;
	
	void preenchesoldado () {
		cout << "Qual e o nome do soldado: " << endl;
		cin >> nome;
	
		cout << "Qual e a idade do soldado: " << endl;
		cin >> idade;
	}
};

struct tropa{
	string name;
	sargento s1;
	soldado *soldier;
	int tam;
};

void funcao (tropa t1, soldado sol1) {
	for (int i = 0; i < t1.tam; i++) {
		if (t1.soldier[i] == sol1) {
			cout << "deu certo";
		}
	}
}

int main () {
	tropa t1;
	
	cout << "Nome da tropa: " << endl;
	cin >> t1.name;
	
	cout << "Quantos soldados sao da tropa? " << endl;
	cin >> t1.tam;
	
	t1.soldier = new soldado [t1.tam];
	soldado sol1;
	sol1.preenchesoldado();
	funcao (t1 , sol1);
	return 0;
}
