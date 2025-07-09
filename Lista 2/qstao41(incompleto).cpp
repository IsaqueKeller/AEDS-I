#include <iostream>
using namespace std;

float money (float debt , float interest , int parcel , float parcel_value){
	float division = debt/parcel;
	for (int i = 0; i < parcel; i++) {
		if (parcel == 1) {
			cout << "Result: " << debt << endl;
		}
		else if (parcel == 3) {
			parcel_value = 0.10;
			division *= parcel_value; 
		}
		else if (parcel == 6) {
			parcel_value = 0.15;
			division *= parcel_value;
		}
		else if (parcel == 9) {
			parcel_value = 0.20;
			division *= parcel_value;
		}
		else if (parcel == 12) {
			parcel_value = 0.25;
			division *= parcel_value;
		}
	}
	return division;
}

int main (){
	float debt; //receive this value
	float interest; //fixed value VV 
	int parcel;
	float parcel_value;
	 
	cout << "How much is the debt? " << endl;
	cin >> debt;
	
	cout << "How many parcels you want? " << endl;
	cin >> parcel;
	
	float result = money (debt , interest , parcel , parcel_value);
	cout << "The result is: " << result << endl;
}
