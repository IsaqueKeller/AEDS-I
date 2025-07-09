#include <iostream>
using namespace std;

void elections () {
	int code;
	int counterA = 0 , counterB = 0 , counterC = 0 , counternull = 0 , counterblank = 0;
	float total = 0;
	
	do {
	cout << "------ Digital Ballot ------" << endl;
	cout << "1 - Candidate A" << endl;
	cout << "2 - Candidate B" << endl;
	cout << "3 - Candidate C " << endl;
	cout << "5 - Null vote" << endl;
	cout << "6 - Blank vote" << endl;
	cout << "0 - Leave" << endl;
	cout << "Choose an option: " << endl;
	cin >> code;
	
	if (code == 1) {
		counterA++;
	}
	else if (code == 2) {
		counterB++;
	}
	else if (code == 3) {
		counterC++;
	}
	else if (code == 5) {
		counternull++;
	}
	else if (code == 6) {
		counterblank++;
	}
	
	} while (code != 0);
	total = counterA + counterB + counterC + counternull + counterblank;
	cout << "Votes for candidate A: " << counterA << endl;
	cout << "Votes for candidate B: " << counterB << endl;
	cout << "Votes for candidate C: " << counterC << endl;
	
	cout << "Null votes: " << counternull << endl; 
}

int main () {
	
}
