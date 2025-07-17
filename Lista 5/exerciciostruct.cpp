#include <iostream>
using namespace std;

struct person {
	string name;
	char sex;
	int age;
	float weight;
	float height;
};

void person_info (person &p1) {
	cout << "What is your name? " << endl;
	cin >> p1.name;
	
	cout << "What is your sex? " << endl;
	cin >> p1.sex;
	
	cout << "What is your age? " << endl;
	cin >> p1.age;
	
	cout << "What is your weight? " << endl;
	cin >> p1.weight;
	
	cout << "What is your height? " << endl;
	cin >> p1.height;
}

void printperson (person &p1) {
	cout << "Person's name: " << p1.name << endl;
	cout << "Person's sex: " << p1.sex << endl;
	cout << "Person's age: " << p1.age << endl;
	cout << "Person's weight: " << p1.weight << endl;
	cout << "Person's height: " << p1.height << endl;
}

int main () {
	person p1;
	person_info (p1);
	printperson (p1);
	
}
