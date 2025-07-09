#include <iostream>
using namespace std;

void money (float debt , float interest , int parcel , float parcel_value){
	
		if (parcel == 1) {
			parcel_value = debt;
			interest = 1;
		}
		else if (parcel == 3) {
			interest = 1.10;
			parcel_value = (debt*interest)/parcel; 
		}
		else if (parcel == 6) {
			interest = 1.15;
			parcel_value = (debt*interest)/parcel;
		}
		else if (parcel == 9) {
			interest = 1.20;
			parcel_value = (debt*interest)/parcel;
		}
		else if (parcel == 12) {
			interest = 1.25;
			parcel_value = (debt*interest)/parcel;
		}
		cout << endl;
	cout << "Debt value: " << debt*interest << endl;
	cout << "Interest value: " << interest << endl;
	cout << "Quantity of parcels: " << parcel << endl;
	cout << "Parcel value: " << parcel_value << endl;
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
	
	money (debt , interest , parcel , parcel_value);
	
}
