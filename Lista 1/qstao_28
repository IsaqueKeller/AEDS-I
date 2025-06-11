// Calcule a média aritmética das 3 notas	de um aluno e mostre, além do valor da média aritmética, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a mensagem "reprovado", caso	contrário.
#include <iostream>
using namespace std;

float grade_function (float grade_1 , float grade_2 , float grade_3) {
	return (grade_1 + grade_2 + grade_3)/3;
}

int main (void) {
	float v1 = 0 , v2 = 0 , v3 = 0;
	float resposta = 0;
	cout << "Type the first grade: " << endl;
	cin >> v1; 
	
	cout << "Type the second grade: " << endl;
	cin >> v2;
	
	cout << "Type the third grade: " << endl;
	cin >> v3;
	
	resposta = grade_function (v1 , v2 , v3);
	
	if (resposta >= 6) {
		cout << "Your average: " << resposta << " Approved" << endl; 
	}
	else {
		cout << "Your average: " << resposta << " Failed" << endl;
	}
}
