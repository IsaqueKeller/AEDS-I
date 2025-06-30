#include <iostream>
using namespace std;

void function (int *v1 , int size1) {
	for (int i = 0; i <= size1; i++) {
		if (i != size1) {
			cout << i << ", ";
		}
		else {
		cout << i << ". ";
	}
}
}

int main (){
	int *v1;
	int size1 = 50;
	
	v1 = new int [size1];
	function (v1 , size1);
}
