#include <iostream>
using namespace std;

void fill_matrix (float **matrix , int line , int column) {
	for (int l = 0; l<= line - 1; l++) {
		for (int c = 0; c <= column - 1; c++) {
			cout << "Matrix [" << l << "]" << "[" << c << "]" << endl;
			cin >> matrix [l][c];
		}
	}
}

void determinant (float **matrix , int line , int column) {
	int a = matrix[0][0], b = matrix[0][1], c = matrix[0][2];
    int d = matrix[1][0], e = matrix[1][1], f = matrix[1][2];
    int g = matrix[2][0], h = matrix[2][1], i = matrix[2][2];
    
    cout << "Determinant is: " << a*(e*i - f*h) - b*(d*i - f*g) + c*(d*h - e*g) << endl; 
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
		matrix[i] = new float [column];
	}
	fill_matrix (matrix , line , column);
	determinant (matrix , line , column);
}
