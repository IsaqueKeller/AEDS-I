#include <iostream>
using namespace std;

struct book {
	string title;
	string author;
	int year;
};

void book_info (string title , string author , int year) {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Year of publication: " << year << endl;
}

int main () {
	book b1;
	cout << "What is the title of the book? " << endl;
	cin >> b1.title;
	
	cout << "What is the author of the book? " << endl;
	cin >> b1.author;
	
	cout << "What is the year of publication of the book? " << endl;
	cin >> b1.year; 
	
	book_info (b1.title , b1.author , b1.year);
}
