#include <iostream>
using namespace std;

float performance () {
	string gymnast;
	float grade;
	float best = 0 , worst = 9999 , total = 0;
	
	cout << "Gymnast: (0 to stop)" << endl;
	cin >> gymnast;
	
	if (gymnast == "0") {
		return 0;
	}

	for (int i = 0; i < 7; i++){
		cout << "Grade: " << endl;
		cin >> grade;
		
		if (grade > best) {
			best = grade;
		}
		else if (grade < worst) {
			worst = grade;
		}
		total += grade;
	}
	total -= best;
	total -= worst;
	cout << endl;
	cout << "Final result: " << endl;
	cout << "Gymnast: " << gymnast << endl;
	cout << "Best grade: " << best << endl;
	cout << "Worst grade: " << worst << endl;
	cout << "Average: " << total/4 << endl;
	cout << endl;
	performance ();
}

int main () {
	performance ();
}
