#include <iostream>
using namespace std;

void notes (int size , float *grade) {
	for (int i = 0; i < size; i++){
		
	}
}

int main (){
	int size;
	float *grade;
	
	cout << "How many grades? " << endl;
	cin >> size;
	
	grade = new float [size];
	notes (size , grade);
}
