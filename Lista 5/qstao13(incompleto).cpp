#include <iostream>
using namespace std;

struct contacts {
	string name;
	string number;
};

struct agenda {
	int maxcontacts;
	contacts *c1;
	
	void add_contacts () {
		
	}
	
	void delete_contacts () {
		
	}
	
	void show_contacts () {
		
	}
};

int main () {
	agenda a1;
	cout << "What is the max of contacts? " << endl;
	cin >> a1.maxcontacts; 
}
