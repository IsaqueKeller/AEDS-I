#include <iostream>
using namespace std;

void temperatures (int size , float temperature){
	int greater = -99999;
	int lowest = 99999;
	int sum = 0;
	for (int i = 0; i < size; i++) {
		cout << "Inform a temperature: " << endl;
		cin >> temperature;
		sum += temperature;
		if (temperature > greater) {
			greater = temperature;
		}
		else if (temperature < lowest) {
			lowest = temperature;
		}
	}
	cout << "Lowest temperature: " << lowest << endl;
	cout << "Highest temperature: " << greater << endl;
	
	cout << "Average temperature: " << sum/size << endl;
}

int main (){
	float temperature = 0;	
	int size = 0;
	
	cout << "Inform the size: " << endl;
	cin >> size;
	
	temperatures (size , temperature);
}
