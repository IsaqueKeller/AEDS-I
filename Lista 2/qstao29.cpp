#include <iostream>
using namespace std;

void prices (int cd , float *price) {

	for (int i = 0; i < cd; i++) {
		cout << "What is the price of the cd " << i+1 << ":" << endl;
		cin >> price[i]; 
	}
}
	
void total_invested (int cd, float *price) {
	float total = 0;
	for (int i = 0; i < cd; i ++) {
		total += price[i];
	}
	cout << "The total invested is: " << total << endl;
	cout << "Medium value per cd: " << total/cd << endl;
}

int main () {
	int cd = 0;
	float *price = 0;
	
	do{
	cout << "Inform how many cds you bought: " << endl;
	cin >> cd;	
	} while (cd <= 0);
	
	price = new float [cd];
		
	prices (cd, price);	 
	total_invested (cd, price);
	return 0;
}
