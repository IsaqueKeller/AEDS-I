#include <iostream>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

void verify_date (int day , int month , int year) {
	cout << "Enter a day: " << endl;
	cin >> day;
	
	cout << "Enter a month: " << endl;
	cin >> month;
	
	cout << "Enter a year: " << endl;
	cin >> year;
	
	for (int i = 0; i < 7; i++) {

		if (month % 2 != 0 and month < 32) {
			
		}
	}
}

int main () {
	date d1;
	
	verify_date (d1.day , d1.month , d1.year);
}
