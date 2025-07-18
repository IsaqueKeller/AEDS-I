#include <iostream>
using namespace std;

struct student {
	int registration_number;
	string name;
	float *grades;
};

void fill_grades (float *grades) {

	for (int i = 0; i < 10; i++) {
		cout << "Enter your grades: " << endl;
		cin >> grades[i];
	} cout << endl;

}

void print_grades (float *grades) {
	float sum = 0;
	for (int i = 0; i < 10; i++) {
		cout << grades[i] << endl;
		sum += grades[i];
	} cout << endl;
	float average = sum/10;
	cout << "Average is: " << average << endl;
}

int main () {
	student s1;
	s1.grades = new float [10];
	
	cout << "What is your registration number? " << endl;
	cin >> s1.registration_number;
	
	cout << "What is your name? " << endl;
	cin >> s1.name;

	fill_grades (s1.grades);
	
	cout << "Student's registration number: " << s1.registration_number << endl;
	cout << "Student's name: " << s1.name << endl;
	cout <<"Student's grades: " << endl;
	cout << endl;
	print_grades (s1.grades);
}
