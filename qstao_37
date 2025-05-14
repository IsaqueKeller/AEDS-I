#include <iostream>
using namespace std;

float average (float grade1 , float grade2 , float grade3) {
	int weight1 = 4;
	int weight2 = 3;
	
	if ((grade1 >= grade2) and (grade1 >= grade3)) {
	return ((grade1 * weight1) + (grade2 * weight2) +(grade3 * weight2)) / (weight1 + 2*weight2);
	}
	else if ((grade2 >= grade1) and (grade2 >= grade3)) {
		return ((grade1 * weight2) + (grade2 * weight1) +(grade3 * weight2)) / (weight1 + 2*weight2);
	}
	else {
		return ((grade1 * weight2) + (grade2 * weight2) +(grade3 * weight1)) / (weight1 + 2*weight2);
	}
}



int main () {
	float num1 = 0 , num2 = 0 , num3 = 0;
	
	cout << "---------  Dear student -------------" << endl;
	cout << "Inform the first grade: " << endl;
	cin >> num1;
	
	cout << "Inform the second grade: " << endl;
	cin >> num2;
	
	cout << "Inform the third grade: " << endl;
	cin >> num3;
	
	float situation = average(num1 , num2 , num3);
	
	
	
	if (situation >= 90) {
		cout << "A" << endl;
	}
	else if ((situation >= 75) and(situation < 90)) {
		cout << "B" << endl;
	}
	else if ((situation >= 60) and (situation <= 75)) {
		cout << "C" << endl; 
	}
	else {
		cout << "Failed" << endl; 
	}
}
