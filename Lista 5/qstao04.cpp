#include <iostream>
using namespace std;

struct date {
	int day;
	int month;
	int year;
};

int verify_date (int day , int month , int year) {
do {
	cout << "Enter a day: " << endl;
	cin >> day;
	
	cout << "Enter a month: " << endl;
	cin >> month;
	
	cout << "Enter a year: " << endl;
	cin >> year;
	if (day <= 0 or day > 31 or month <= 0 or month > 12 or year < 0) {
		cout << "Invalid date!" << endl;
	}
} while (day <= 0 or day > 31 or month <= 0 or month > 12 or year < 0);
	
		if (month == 2 ){
			if ((year % 4 == 0 and year% 100 != 0) or (year % 400 == 0) and day < 30){
				cout << day << "/" << month << "/" << year << endl;
			}
			else {
				cout << "Invalid date!" << endl;
			}
		} 
	
		else if (month % 2 != 0 and day < 32) {
			cout << day << "/" << month << "/" << year << endl;
		}
		else if (month % 2 == 0 and day < 31) {
			cout << day << "/" << month << "/" << year << endl;
		}
		else {
			cout << "Invalid date!" << endl;
			return 0;
		} 	
}

int main () {
	date d1;
	
	verify_date (d1.day , d1.month , d1.year);
}
