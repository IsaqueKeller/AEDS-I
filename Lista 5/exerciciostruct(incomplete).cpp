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

int main () {
	person p1;
	person_info (p1);
	
}
