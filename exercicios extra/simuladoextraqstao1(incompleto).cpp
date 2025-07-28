/*Questão 1 (5 pontos)
a) Crie uma estrutura chamada Filme com os seguintes dados: título, gênero e valor diário da locação.

b) Crie uma estrutura chamada Cliente com os seguintes dados: código do cliente (inteiro), nome e endereço 
(endereço pode ser representado por um único vetor de char).

c) Depois, crie uma estrutura chamada Locacao contendo um cliente, um vetor de filmes (no máximo 5), o número de dias em atraso e o valor total da locação. 
Nesta estrutura, você deve usar as estruturas definidas em a) e b).*/

#include <iostream>
using namespace std;
struct filme {
	string titulo;
	string genero;
	float valordiario = 0;
};

struct cliente {
	int code = 0;
	string name;
	char endereco;
	
	void preenchedoido () {
		cout << "Nome do cliente: " << endl;
		cin >> name;
		
		cout << "Codigo do cliente: " << endl; cin >> code;
		cout << "Endereco: " << endl; cin >> endereco;
	}
};

struct locacao{
	cliente doido;
	filme *f1;
	int qtde = 0;
	float valor = 0;
	int dias = 0;
	
	do {
		cout << "Quantos filmes? " << endl;
		cin >> qtde;
	} while (qtde > 5);
	
	void precototal () {
		for (int i = 0; i < qtde; i++) {
			cout << "Titulo do filme: " << endl;
			cin >> f1[i].titulo;
			
			cout << "Genero do filme: " << endl;
			cin >> f1[i].genero;
			
			cout << "Valor diario: " << endl;
			cin >> f1[i].valordiario;
		}
	}
	void locadora () {
		cout << "Quem e o cliente? " << endl;
		cin >> doido;
		
		cout << "Filmes: " << endl;
		for (int i = 0; i < qtde; i++) {
			cout << f1[i] << endl;
		}
	}
};

int main () {
	cliente doido;
	filme *f1;
	doido.preenchedoido();
	locacao l1;
	l1.locadora();
}
