#include <iostream>
using namespace std;

void money (int value , int hundred , int fifty , int ten , int five , int one) {
	int rest = 0;
	hundred = value/100;
	rest = value%100;
	cout << hundred << " Hundreds" << endl;
	
	fifty = rest/50;
	rest = rest%50;
	cout << fifty << " fifties" << endl;
	
	ten = rest/10;
	rest = rest%10;
	cout << ten << " tens" << endl;
	
	five = rest/5;
	rest = rest%5;
	cout << five << " fives" << endl;
	
	one = rest/1;
	cout << one << " ones" << endl;
	
}

int main () {
	int value = 0, hundred = 0 , fifty = 0 , ten = 0 , five = 0 , one = 0;
cout << "Type the value: " << endl;
cin >> value;
money (value , hundred , fifty , ten , five , one);
}
