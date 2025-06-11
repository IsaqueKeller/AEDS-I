#include <iostream>
#include <math.h>
using namespace std;

float subtracao (float a , float b) {
float x = a - b;
 return x;
}

int main (void) {
float a , b;
 cout << "Valor de a: " << endl;
 cin >> a;
 
 cout << "Valor de b: " << endl;
 cin >> b;
 cout << endl;
 
 float resultado = subtracao(a , b);
 	cout <<"O resultado eh: " << resultado << endl; 
}

