#include <iostream>
using namespace std;

void calculation (int student , float height) {
	float greater_height = 0;
	float lower_height = 9999;
	int codegr , codelw;
	for (int i = 0; i < 10; i++) {
		cout << "Inform the student: " << endl;
		cin >> student;
		
		cout << "Inform the height: " << endl;
		cin >> height;
		
		if (height > greater_height) {
			greater_height = height;
			codegr = student;
		}
		else if (height < lower_height) {
			lower_height = height;
			codelw = student;
		}
	}
	cout << "The tallest students is " << codegr << " with " << greater_height << " m" << endl;
	cout << "The shortest student is " << codelw << " with " << lower_height << " m" << endl;
}

int main (){
	int student;
	float height;
	
	cout << "Inform 10 students' heights" << endl;
	calculation (student , height);
}
