#include <iostream>
using namespace std;

struct person {
	string name;
	int age;
	float height;
};

void person_info (person &p1) {
	cout << "What is your name? " << endl;
	cin >> p1.name;
	
	cout << "How old are you? " << endl;
	cin >> p1.age;
	
	cout << "How tall are you? " << endl;
	cin >> p1.height;
}

void print_person (person &p1) {
	cout << "Name: " << p1.name << endl;
	cout << "Age: " << p1.age << endl;
	cout << "Height: " << p1.height  << " cm"<< endl;

}

int main () {
	person p1;
	person_info (p1);
	print_person (p1);
}
