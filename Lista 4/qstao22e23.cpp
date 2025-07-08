#include <iostream>
using namespace std;

void function (float **matrix , int line , int column) {
	for (int ln = 0; ln < line; ln++) {
		for (int c = 0; c < column; c++) {
			cout << "Matrix [" << ln << "]" << "[" << c << "]" << endl;
			cin >> matrix [ln][c];
		}
	} cout << endl;
}
void print_function (float **matrix , int line , int column) {
	for (int ln = 0; ln < line; ln++){
		for (int c = 0; c < column; c++){
			cout << matrix [ln][c] << "\t";
		}
		cout << endl;
	}
}

int main () {
	float **matrix;
	float *number;
	int line , column;
	
	cout << "Type the number of columns: " << endl;
	cin >> column;
	
	cout << "Type the number of lines: " << endl;
	cin >> line;

	matrix = new float *[line];
		for (int i = 0; i <= line - 1; i++) {
			matrix[i] = new float [column];
		}
	function (matrix , line , column);
	print_function (matrix , line , column);
}
