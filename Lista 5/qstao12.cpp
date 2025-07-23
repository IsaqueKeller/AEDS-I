#include <iostream>
using namespace std;

struct car {
	string brand;
	string model;
	int year;
	
	void car_info () {
		cout << "Brand: " << brand << endl;
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
	}
};

int main () {
	car c1;
	
	cout << "What is the car's brand? " << endl;
	cin >> c1.brand;
	
	cout << "What is the car's model? " << endl;
	cin >> c1.model;
	
	cout << "What is the year of the car? " << endl;
	cin >> c1.year;
	cout << endl;
	c1.car_info();
}
