#include <iostream>
using namespace std;
//arithmetic mean , weighted average , harmonic average
void arithmetic_mean(float grade1 , float grade2 , float grade3) {
	cout << "The arithmetic mean is: " << endl;
	cout << (grade1 + grade2 + grade3) /3 << endl;
}

void weighted_average (float grade1 , float grade2 , float grade3) {
	int weight1 = 3 , weight2 = 3 , weight3 = 4;
	cout << "The weighted average is: " << endl;
	cout << ((grade1 * weight1) + (grade2 * weight2) + (grade3 * weight3)) / 10 << endl;
}

void harmonic_average (float grade1 , float grade2 , float grade3) {
	cout << "The harmonic average is: " << endl;
	cout << 3 / (1/grade1 + 1/grade2 + 1/grade3) << endl; 
}

void menu(float num1 , float num2 , float num3){
	int opcao = 0;

	cout << "Choose what average you wish to calculate: " << endl;
	cout << "1- Arithmetic mean" << endl;
	cout << "2- Weighted average" << endl;
	cout << "3- Harmonic average" << endl;
	cin >> opcao;
	switch (opcao) {
		case 1:
		arithmetic_mean (num1 , num2 , num3);
		break;
		
		case 2: 
		weighted_average (num1 , num2 , num3);
		break;
		
		case 3: 
		harmonic_average (num1 , num2 , num3);
		break;
		
		default:
		menu(num1 , num2 , num3);
	}
}

int main () {
	float num1 = 0 , num2 = 0 , num3 = 0;

cout << "Type the first grade: " << endl;
cin >> num1;

cout << "Type the second grade: " << endl;
cin >> num2;

cout << "Type the third grade: " << endl;
cin >> num3;
	
	menu(num1 , num2 , num3);
}
