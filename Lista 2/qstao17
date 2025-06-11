// 1,1,2,3,5,8,13,21,34,...
#include <iostream>
using namespace std;

int fibo (int n) {
int sum = 0;

if (n == 1) {
	return 1;
}
else {
int c = 0;
cout << "Fibonacci Serie: ";
        int a = 1, b = 1;
        cout << a << " " << b << " ";

        for (int i = 3; i <= n; ++i) {
          c = a + b;
            cout << c << " ";
            a = b;
            b = c;

} return c;  
}
}


int main () {
	int n = 0;
	do {
	
	cout << "Type in the position of the fibonacci you wish to see: " << endl;
	cin >> n;
} while (n > 500 or n <= 0);


int result = fibo (n); 
cout << "The number is: " << result << endl; 
}
