#include <iostream>
using namespace std;

void function (int *v1 , int size) {
	for (int i = 0; i < size; i++){
		v1 [i] = 2 * i + 1;
	}
	for (int i = 0; i < size; i++) {
		cout << v1[i] << " ";
	}
}

int main () {
	int *v1;
	int size = 100;
	v1 = new int [size];
	function (v1 , size);
}
