#include <iostream>
using namespace std;

int main () {
	int *vector = 0;
	int i = 0;
	vector = new int [i];
	
	do {
	cout << "Type a number: " << endl;
	cin >> vector[i];
	i++;	
	} while(i < 5);
	
	for (int j = 4; j >= 0; j--) {
		cout << vector [j] << ", ";
	}
}
