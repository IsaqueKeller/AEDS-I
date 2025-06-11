#include <iostream>
using namespace std;

void personal_information (int age , float salary , char civil_status) {
	do {
		cout << "What is your age: " << endl;
		cin >> age;
	} while (age <= 0 or age > 150);
	
	do {
		cout << "What is your salary: " << endl;
		cin >> salary;
	} while (salary <= 0);
	
	do {
		cout << "What is your civil status: " << endl;
		cin >> civil_status;
	} while (civil_status != 's' and civil_status != 'c' and civil_status != 'v' and civil_status != 'd');

	cout << "You are " << age << " years old , your salary is  " << salary << " USD , and you are " << civil_status << endl;
}


int main () {
	int age = 0;
	float salary = 0;
	char civil_status;
	personal_information (age , salary , civil_status);
}
