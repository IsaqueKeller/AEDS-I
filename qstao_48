#include <iostream>
using namespace std;
// Fórmula: (valor_1 * quant_1 + valor_2 * quant_2) * (IPI/100 + 1)

float main_function (float value_1 , float value_2 , float IPI , int quant1 , int quant2) {
	return (value_1 * quant1 + value_2 * quant2) * (IPI/100 + 1);
}

int main () {
	float v1 = 0 , v2 = 0 , tax = 0;
	int q1 = 0 , q2 = 0;
	
	cout << "Type the value of the first item: " << endl;
	cin >> v1;
	
	cout << "Type the value of the second item: " << endl;
	cin >> v2;
	
	cout << "Type the IPI value: " << endl;
	cin >> tax;
	
	cout << "Type the quantity of the item 1: " << endl;
	cin >> q1;
	
	cout << "Type the quantity of the item 2: " << endl;
	cin >> q2;
	
	cout << main_function (v1 , v2 , tax , q1 , q2) << endl;
	return 0;
}
