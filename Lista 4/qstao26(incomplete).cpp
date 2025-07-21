#include <iostream>
using namespace std;

void fill_matrix (float **matrix , int line , int column) {
	for (int l = 0; l < line; l++) {
		for (int c = 0; c < column; c++) {
			cout << "Matrix [" << l << "][" << c << "]" << endl;
			cin >> matrix[l][c];
		}
	}
}

void determinant (float **matrix , int line , int column) {
	float **a00;
	a00 = new float *[line - 1];
	for (int i = 0; i < line - 1; i++) {
		a00[i] = new float [column - 1];
	}
		
	for (int l = 1; l < line; l++) {
		for (int c = 1; c < column; c++) {
				a00[l - 1][c - 1] = matrix[l][c];
			}		
		}
		
	cout << endl;
	cout  << "a00 is: " << endl;
	for (int i = 0; i < line - 1; i++) {
		for (int j = 0; j < column - 1; j++) {
			cout << a00[i][j] << "\t";
		}
		cout << endl;
	}
}

int main () {
	float **matrix;
	int line , column;
	
	cout << "Enter the number of lines: " << endl;
	cin >> line;
	
	cout << "Enter the number of columns: " << endl;
	cin >> column;
	
	matrix = new float *[line];
	
	for (int i = 0; i < line; i++) {
		matrix[i] = new float [column];
	}
	
	fill_matrix (matrix , line , column);
	determinant(matrix , line , column);
}
