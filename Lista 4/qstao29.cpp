#include <iostream>
using namespace std;

void fillmatrix (int **matrix , int line , int column) {
	for (int l = 0; l < line; l++) {
		for (int c = 0; c < column; c++) {
			cout << "Matrix [" << l << "][" << c << "]" << endl;
			cin >> matrix[l][c];
		}
	}	cout << endl;
}

void printmatrix (int **matrix , int line , int column) {
	for (int l = 0; l < line; l++) {
		for (int c = 0; c < column; c++) {
			cout << matrix[l][c] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

void matrixtranspost (int **matrix , int line , int column) {
	int l;
	int c;

	cout << "Transpost matrix: " << endl;
	for (l = 0; l < column; l++) {
		for (c = 0; c < line; c++) {
			cout << matrix[c][l] << "\t";
		} cout << endl;
	}
}

int main () {
	int **matrix;
	int line;
	int column;
	
	cout << "Enter the number of lines: " << endl;
	cin >> line;
	
	cout << "Enter the number of columns: " << endl;
 	cin >> column;
 	
 	matrix = new int *[line];
 	
 	for (int i = 0; i < line; i++) {
 		matrix [i] = new int [column];
	 }
	 fillmatrix (matrix , line , column);
	 printmatrix (matrix , line , column);
	 matrixtranspost (matrix , line , column);
}
