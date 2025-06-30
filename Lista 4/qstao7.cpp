#include <iostream>
using namespace std;

void function (int *v1 , int size) {
	int i = 0; 
	int counter = 0;
	while (i < size) {
		if (i % 2 != 0) {
			v1[counter] = i;
			counter++;
		} i++;
	}
	for (int i = 0; i <= counter; i++) {
		cout << v1[i] << " ";
	}
}

int main () {
	int *v1;
	int size = 100;
	v1 [size];
	function (v1 , size);
}
