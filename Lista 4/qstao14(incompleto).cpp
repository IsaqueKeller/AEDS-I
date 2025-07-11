#include <iostream>
using namespace std;

void fill_vector (int *vec , int size){
	for (int i = 0; i < size; i++){
		do {
			cout << "Enter a number: " << endl;
			cin >> vec [i];
		} while (vec[i] % 2 == 0); 
	}
}

int main (){
	int *vec;
	int size;
	
	cout << "What is the size? " << endl;
	cin >> size;
	
	vec = new int [size];
	
	fill_vector (vec , size);
}
