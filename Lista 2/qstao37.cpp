#include <iostream>
using namespace std;

void function (float height , float weight , char code) {
	float greater_height = 0;
	float greater_weight = 0;
	char height_codegr , height_codelw;
	char weight_codegr , weight_codelw;
	do {
		cout << "Code: " << endl;
		cin >> code;
		
		cout << "Height: " << endl;
		cin >> height;
		
		cout << "Weight: " << endl;
		cin >> weight;
		
		if (height > greater_height) {
			greater_height = height;
			height_codegr = code;
		}
		else {
			height_codelw = code;
		}
			if (weight > greater_weight) {
			greater_weight = weight;
			weight_codegr = code;
		}
		else {
			weight_codelw = code;
		}
	} while (code > 0);
	cout << "The highest person is: " << height_codegr << " with " << greater_height << " cm" << endl;
	cout << "The shortest person is: " << height_codelw << " with " << 	
}

int main (){
	float height , weight; 
	char code;
	
	function (height , weight , code);
}
