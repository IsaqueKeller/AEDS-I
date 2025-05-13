#include <iostream>
#include <math.h>
using namespace std;
//calcular IMC = peso/ altura²

void Imc_function (float weight , float height) {
	float IMC = 0;
	float ideal_weight = 0;
	IMC = weight / pow (height , 2);
	cout << "Your IMC is: " << IMC << endl;
	
	ideal_weight = 22 * pow (height , 2);
	
	if (IMC < 22.0) {
		cout << "Your ideal weight is: " << ideal_weight << " kg." << endl;
		cout << "You need to gain " << ideal_weight - weight << " kg." << endl;
		 
	} 
	else {
		cout << "Your ideal weight is: " << ideal_weight << " kg." << endl;
		cout << "You need to lose " << weight - ideal_weight << " kg." << endl;
	}
	
}

int main () {
	float kg , cm = 0;
	cout << "Inform your weight: " << endl;
	cin >> kg;
	
	cout << "Inform your height: " << endl;
	cin >> cm;
	
	Imc_function (kg , cm);
}
