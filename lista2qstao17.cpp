// 1,1,2,3,5,8,13,21,34,...
#include <iostream>
using namespace std;

int fibo (int n) {

for (int i = 0; i <= n; i++) {
	
	if (i == 0) {
	
	}
	if (i == 1) {
		cout << i << ", ";
	}
	else {	
	cout << i-1 + i-2 << ", ";
}
}


	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
	return fibo(n-1) + fibo(n-2);	
}
}


int main () {
	int n = 0;
	do {
	
	cout << "Type in the position of the fibonacci you wish to see: " << endl;
	cin >> n;
} while (n > 500);


int result = fibo (n); 
cout << "The number is: " << result << endl; 
}
