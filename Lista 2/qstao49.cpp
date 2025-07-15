#include <iostream>
using namespace std;

void function (int n) {
	float sum = 0;
	for (float i = 1; i <= n; i++) {
		cout << 1/i << " + ";
		sum += 1/i;
	}
	cout << "H is: " << sum << endl;
}

int main () {
	int n;
	cout << "To which number you wish to see the sequence? " << endl;
	cin >> n;
	
	function (n);
}
