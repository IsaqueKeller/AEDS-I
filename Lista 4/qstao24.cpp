#include <iostream>
using namespace std;

void function (float **matrix , int line , int column) {
	for (int ln = 0; ln < line; ln++){
		for (int c = 0; c < column; c++) {
			cout << "Matrix [" << ln << "]" << "[" << c << "]" << endl;
			cin >> matrix[ln][c];
		}
	}
}

void print_function (float **matrix , int line , int column) {
	for (int ln = 0; ln < line; ln++){
		for (int c = 0; c < column; c++) {
			cout << matrix[ln][c] << "\t";
		}
		cout << endl;
	} cout << endl;
}

void determinant (float **matrix , int line , int column) {
	float resultmain = 1;
	float resultsec = 1;
	for (int ln = 0; ln < line; ln++) {
		for (int c = 0; c < column; c++) {
			if (ln == c) {
				resultmain *= matrix[ln][c];
			}
			else {
				resultsec *= matrix [ln][c];
			}
		}
	}
	cout << "The determinant is: " << resultmain - resultsec << endl; 
}

int main (){
	float **matrix;
	int line , column;
	
	cout << "Enter the number of lines: " << endl;
	cin >> line;
	cout << "Enter the number of columns: " << endl;
	cin >> column;
	
	matrix = new float *[line];
	for (int i = 0; i <= line - 1; i++){
		matrix [i] = new float [column];
	}
	function (matrix , line , column);
	print_function (matrix , line , column);
	determinant (matrix , line , column);
}
