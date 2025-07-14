#include <iostream>
using namespace std;

void grade (char *gauge) {
	char answer;
	char program;
	int counter = 0 , total = 0 , studentcounter = 0 , greatest = 0 , lowest = 0;

	do{
		cout << "Do you want to see your grades? " << endl;
		cin >> program;
	
	if (program != 'y') {
		break;
	}
	else{

		for (int i = 0; i < 10; i++) {
		cout << "What is the answer for question " << i+1 << "? answer a - e " << endl;
		cin >> answer;
		
		if (answer == gauge[i]){
			counter++;
			}
		}
		if (counter > greatest) {
			greatest = counter;
		}
		else if (counter < lowest) {
			lowest = counter;
		}
		studentcounter++;
		total += counter; 
		}
	} while (program == 'y');
	cout << "The highest score is: " << greatest << endl;
	cout << "The lowest score is: " << lowest << endl;
	cout << endl;
	cout << "The total of students that used the program is: " << studentcounter << endl;
	cout << "The average score is: " << total/studentcounter << endl;
}

int main () {
	char gauge[10];
	cout << "Teacher, please insert the gauge for the test: " << endl;
	for (int i = 0; i < 10; i++){
			cout << "Question " << i+1 << endl;
			cin >> gauge[i];
	}

	grade(gauge);
}
