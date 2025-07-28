#include <iostream>
using namespace std;
int fillmatrix(int **matrix , int tam , int num) { 
	for (int l = 0; l < tam; l++) {
		for (int c = 0; c < tam; c++) {
			cout << "Matrix " << num <<  " [" << l << "][" << c << "]" << endl;
			cin >> matrix[l][c];
		}
	}
	cout << endl;
	return 0;
}

int lowertriangular (int **matrix , int tam , int num) {
	int sum = 0;
	for (int l = 0; l < tam; l++) {
		for (int c = 0; c < tam; c++) {
			if (c <= l) {
				sum += matrix [l][c];
				cout << matrix[l][c] << " ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << endl;
	}
	return sum;
}

int somatory (int **matrix , int tam , int num) {
	int sum = 0;
	for (int l = 0; l < tam; l++) {
		for (int c = 0; c < tam; c++) {
			if (l != 0 || c != 1) {
			sum += matrix[l][c];	
			}
		}
	}
	return sum;
}

int printmatrix (int **matrix , int tam , int number) {
	for (int l = 0; l < tam; l++) {
		for (int c = 0; c < tam; c++) {
		if (number == 1){
			if (l == 0 && c != 0) {
				matrix[l][c] = 0;
			}
			else if (l == 1 && c == 2) {
				matrix[l][c] = 0;
			}
		}
			cout << matrix[l][c] << "\t";
		}
		cout << endl;
	}
	return 0;
}

int letrac (int **matrix , int tam , int aux) {
	int *colunas = 0;
	int maior = 0 , indice = 0;
	colunas = new int [tam];
	for (int l = 0; l < tam; l++){
		for (int c = 0; c < tam; c++) {
			if (matrix[l][c] == aux) {
			matrix[l][c] = 0;
			colunas[c] = colunas[c]+1;
			}
		cout << matrix[l][c] << "\t";
		}
			cout << endl;
		}
		for (int i = 0; i < tam; i++) {
			if (colunas[i] > maior) {
				maior = colunas[i];
				indice = i;
			}
		}
		cout << "A coluna que ocorreu mais substituicoes foi a coluna: " << indice << endl;
	}
	
int main () {
	int **matrix1 = 0;
	int **matrix2 = 0;
	int line_column = 0;
	int lnc = 0 , aux = 0;

	cout << "What is the number of lines and columns of the first matrix? " << endl;
	cin >> line_column;
	
	cout << "And what's the number of the second matrix? " << endl;
	cin >> lnc;

	matrix1 = new int *[line_column];
	matrix2 = new int *[lnc];
	
	for (int i = 0; i < line_column; i++) {
		matrix1[i] = new int [line_column];
	}
	for (int i = 0; i < lnc; i++) {
		matrix2[i] = new int [lnc];
	}
	
	fillmatrix (matrix1 , line_column, 1);
	fillmatrix (matrix2 , lnc , 2);
	cout << endl;
	int result = lowertriangular (matrix1 , line_column , 1);
	cout << "The lower triangular matrix is: " << result << endl;
	cout << endl;

	printmatrix (matrix1 , line_column , 1);
	cout << endl;
	printmatrix (matrix2 , lnc , 2);
	
	int somatory1 = somatory(matrix1 , line_column , 1);
	int somatory2 = somatory (matrix2 , lnc , 2);
	cout << endl;
	
	if (somatory1 > somatory2) cout << "The greatest somatory is from matrix 1: " << somatory1 << endl;
	else cout << "The greatest somatory is from matrix 2 " << somatory2 << endl;
	
	cout << endl;
	cout << "Enter an auxiliar number for matrix 1: " << endl;
	cin >> aux;
	
	letrac(matrix1 , line_column , aux);
	return 0;
}
