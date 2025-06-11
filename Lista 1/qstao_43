// leia o salario e o cargo de 	um funcionario e calcule o novo salario
#include <iostream>
using namespace std;

void job_title () {
	int code = 0; 
	float salary = 0;
	cout << "Codes:   Job Title: " << endl;
	cout << "101       Manager\n102       Engineer\n103       Tecnician\n" << endl;
	
	cout << "Type in your code: " << endl;
	cin >> code;
	
	cout << "Type in your salary: " << endl;
	cin >> salary;
	
	switch (code) {
		case 101: 
			cout << "Hello manager o/" << endl;
			cout << "Your new salary is: " << salary* 1.10 << endl;
			break;
			
		case 102: 
			cout << "Hello engineer o/" << endl;
			cout << "Your new salary is: " << salary* 1.20 << endl;
			break;
			
		case 103: 
			cout << "Hello Tecnician o/" << endl;
			cout << "Your new salary is: " << salary* 1.30 << endl;
			break;
			
			default: 
			cout << "Hello worker o/" << endl;
			cout << "Your new salary is: " << salary*1.40 << endl;
	}
}

int main () {	
	job_title ();
}
