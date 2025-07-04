#include <iostream>
using namespace std;

void results (int code , int veichles , int accidents) {
	int most_accidents , least_accidents , codemost , codeleast;
	int sum , counter , sumacc = 0;
	for (int i = 0; i < 5; i++) {
		cout << "Type in the code of the city: " << endl;
		cin >> code;
		
		cout << "Type in the number of passanger veichles: " << endl;
		cin >> veichles;
		
		cout << "Type in the number of accidents: " << endl;
		cin >> accidents;
		
		sum += veichles;
		
		if (veichles < 2000) {
			counter++;
			sumacc += accidents;
		}
		
		if (accidents > most_accidents) {
			most_accidents = accidents;
			codemost = code;
		}
		else if (accidents < least_accidents) {
			least_accidents = accidents;
			codeleast = code;
		}
	}
	cout << endl;
	cout << "The highest number of accidents was " << most_accidents << " in the city " << codemost << endl;
	cout << "The least number of accidents was " << least_accidents << " in the city " << codeleast << endl;
	cout << endl;
	
	cout << "The average of veichles is: " << sum/5 << endl;
	cout << "The average of accidents in cities with less than 2000 veichles is: " << sumacc/counter;
	
	
}

int main () {
	int code , veichles , accidents = 0;
	
	
	results (code , veichles , accidents);
}
