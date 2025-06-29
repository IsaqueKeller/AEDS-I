#include <iostream>
using namespace std;

int function (int *vector1 , int size1 , int *vector2 , int size2) {
	int *greater; 
	int *smaller;
	int smaller_size; int greater_size;
	
	if (size1 < size2) {
		greater_size = size2;
		smaller_size = size1;
		greater = vector2;
		smaller = vector1;
	}
	else {
		smaller_size = size2;
		greater_size = size1;
		greater = vector1;
		smaller = vector2;
	}

	for (int i = 0; i < smaller_size; i++) {
		greater [i] = smaller [i];
	}
	for (int i = smaller_size; i < greater_size; i++) {
		greater [i] = 5;
	}
	
	int sum = 0;
	for (int i = 0; i < greater_size; i++) {
		sum += greater[i];
	}
	return sum;
}

int main (){
	int *vector1;
	int size1;
	
	cout << "Inform the first size: " << endl;
	cin >> size1;
	
	vector1 = new int [size1];
	
	int *vector2;
	int size2;
	
	cout << "Inform the second size: " << endl;
	cin >> size2;
	
	vector2 = new int [size2];
	
	if (size1 > size2) {
		for (int i = 0; i < size2; i++) {
			cout << "Type in a number: " << endl;
			cin >> vector2 [i];
		}
	}
	else {
		for (int i = 0; i < size1; i++) {
			cout << "Type in a number: " << endl;
			cin >> vector1 [i];
		}
	}
	
	int result = function (vector1 , size1 , vector2 , size2);
	cout << "The result is: " << result << endl;
}
