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

void funcao (tropa , soldado) {
	
	

}

int main () {
	tropa t1;
	
	cout << "Tropa: " << endl;
	cin >> t1.name;
	
	cout << "Quantos soldados sao da tropa? " << endl;
	cin >> t1.tam;
	
	t1.soldier = new soldado [t1.tam];
	soldado sol1;
	funcao (t1 , sol1);
}
