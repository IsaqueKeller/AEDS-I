#include <iostream>
using namespace std;

void fill_matrix (float **matrix , int line , int column) {
	for (int l = 0; l <= line - 1; l++) {
		for (int c = 0; c <= column - 1; c++){
			cout << "Matrix[" << l << "]" << "[" << c << "]" << endl;
			cin >> matrix[l][c];
		}
	}
	cout << endl;
}

void print_matrix (float **matrix , int line , int column) {
	for (int l = 0; l <= line - 1; l++){
		for (int c = 0; c <= column - 1; c++) {
			cout << matrix[l][c] << "\t";
		}
		cout << endl;
	}
}

void sum (float **matrix , int line , int column) {
	int somatory = 0;
	for (int l = 0; l <= line - 1; l++){
		for (int c = 0; c <= column - 1; c++) {
			somatory += matrix [l][c];	
	}
}
cout << "somatory: " << somatory << endl;
}

int main () {
	float **matrix;
	int line , column;
	
	cout << "Enter the number of lines: " << endl;
	cin >> line;
	
	cout << "Enter the number of columns: " << endl;
	cin >> column;
	
	matrix = new float *[line];
		for (int i = 0; i <= line - 1; i++) {
			matrix [i] = new float [column];
		}
	
	fill_matrix (matrix , line , column);
	print_matrix (matrix , line , column);
	sum (matrix , line , column);
}
