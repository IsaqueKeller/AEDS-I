/*pais A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% 
população de B seja 200000 habitantes com uma taxa de crescimento de 1.5% */

// calculo: A: 80000 * 1.03 elevado a t
// calculo B: 200000 * 1.015 elevado a t 
#include <iostream>
#include <math.h>
using namespace std;

void population () {
	float year = 0;
	float result_a = 80000; 
	float result_b = 200000;
do {
	result_a *= 1.03;
	result_b *= 1.015;
	year++;
}while (result_a <= result_b);

	cout << "The population of the country A will overcome B in " << year << " years." << endl;
	
}

void calculating_population (int people_a , int people_b , float year , float tax_a , float tax_b) {

do {
	cout << "Inform the population of country A: " << endl;
	cin >> people_a;
	
	cout << "Inform the tax of A: " << endl;
	cin >> tax_a;
	tax_a = 1 + tax_a/100;
	
	cout << "Inform the population of country B: " << endl;
	cin >> people_b;
	
	cout << "Inform the tax of B: " << endl;
	cin >> tax_b;
	tax_b = 1 + tax_b/100;
} while (people_a >= people_b);
	do {
		people_a *= tax_a;
		people_b *= tax_b;
		year ++;
	} while (people_a <= people_b);
	
	
	cout << "The population of A will overcome B in " << year << " years." << endl;
	
}

int main () {
	int people_a = 0 , people_b = 0 , option = 0;
	float year = 0 , tax_a = 0 , tax_b = 0;
	
	cout << "Choose an option , 1 or 2: " << endl;
	cin >> option;
	
	switch (option) {
	case 1: 
			population ();
	break;
	
	case 2: 
		calculating_population (people_a , people_b , year , tax_a , tax_b);
	break;
	}
	
}
