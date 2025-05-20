#include <iostream>
using namespace std;

int function (int n1 , int n2 , int n3) {
int three_equal = 3;
int two_equal = 2;


if (n1 == n2 && n2 == n3) {
	return three_equal;
}			
else if (n1 == n2 or n2 == n3 or n1 == n3) {
	return two_equal;
}
if (n1 < n2 && n1 < n3 && n2 < n3) {	
	return n3;
}	
else if (n1 > n2 && n2 > n3) {
	return n1;
}
else {
	return 0;
}
}
 


int main () {
int v1 = 0 , v2 = 0 , v3 = 0;	

cout << "Inform three numbers: " << endl;
cin >> v1;
cin >> v2;
cin >> v3;

int result = function (v1 , v2 , v3);
if (result == 3) {
	cout << "All numbers are equal" << endl;
}
else if (result == 2){
cout << "Two numbers are equal"  << endl;	
}
if (result == 0) {
	cout << "The numbers aren't in order" << endl;
}
if (result == v3) {
	cout << v3 << " The numbers are in ascending order" << endl;
}
else if (result == v1) {
	cout << v1 << " The numbers are in descending order" << endl;
}

}
