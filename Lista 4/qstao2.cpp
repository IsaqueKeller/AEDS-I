#include <iostream>
using namespace std;

void greatest (float *q , int size) {
int position;
float greater = -9999;
for (int i = 0; i < size; i++) {
	do{
	cout << "Type in a number: " << endl;
	cin >> q[i];		
	} while (q[i] < 0);
	
	if (q[i] > greater) {
		greater = q[i];
		position = i;
	}
}
	cout << "The greatest number is: " << greater << endl;
	cout << "Position in vector: " << position << endl;
}

int main (){
	float *q;
	int size;
	
	cout <<  "Inform the size: " << endl;
	cin >> size;
	
	q = new float [size];	
	
	greatest (q , size);
}
