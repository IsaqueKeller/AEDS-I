#include <iostream>
using namespace std;

void candidates (int electors) {
	int candidate_1 = 0 , candidate_2 = 0 , candidate_3 = 0;
	int vote = 0;
	int i = 0;
	do { 	
		cout << "Vote for a candidate (1,2,3): " << endl;
	cin >> vote;
	
	switch (vote) {
		
		case 1: 
			candidate_1 += 1;
			i++;
		break;
		
		case 2:
			candidate_2 += 1;
			i++;
		break;
		
		case 3:
			candidate_3 += 1;
			i++;
		break;
	
		default: 
		cout << "Invalid" << endl;
	}
	} while (i < electors);
	cout << "Candidate_1: " << candidate_1 << endl;
	cout << "Candidate_2: " << candidate_2 << endl;
	cout << "Candidate_3: " << candidate_3 << endl;
}

int main () {
	int electors = 0;
	
	do {
	
	cout << "Type in the number of electors: " << endl;
	cin >> electors;	
} while (electors <= 0);
	candidates (electors);
}
