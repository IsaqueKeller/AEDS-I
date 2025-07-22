#include <iostream>
using namespace std;

void notes (int size , float *grade , int *absolute_frequency) {
	for (int i = 0; i <= 10; i++) {
		absolute_frequency[i] = 0;
	}

	for (int i = 0; i < size; i++){
		do {
			cout << "Enter a grade: " << endl;
			cin >> grade[i];
		} while (grade[i] < 0 or grade[i] > 10);
		
	int nota_int = (int)grade[i];	
	absolute_frequency[nota_int]++;
	} cout << endl;
}

void print_frequencies (int *absolute_frequency , int size) {
	float total = 0;
	for (int i = 0; i < size; i ++) {
		total += absolute_frequency [i];
	cout << i << " Absolute frequency: " << absolute_frequency[i] << endl;
	}
	cout << "Relative frequency: " << total/size << endl;
}

int main (){
	int size;
	float *grade;
	int *absolute_frequency;
	
	cout << "How many grades? " << endl;
	cin >> size;
	
	absolute_frequency = new int [11];
	grade = new float [size];

	notes (size , grade , absolute_frequency);
	print_frequencies (absolute_frequency , size);
}
