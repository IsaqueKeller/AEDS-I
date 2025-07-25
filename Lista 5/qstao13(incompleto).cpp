#include <iostream>
using namespace std;

struct contacts {
	string name;
	string number;
};

struct agenda {
	int maxcontacts;
	int tam;
	contacts *c1;

	void show_contacts () {
		cout << "Contacts: " << endl;
		for (int i = 0; i < maxcontacts; i++) {
			cout << "Name: " << c1[i].name << " , Telefone number: " << c1[i].number << endl;
		} cout << endl;
	}

	void add_contacts () {
		cout << "How many contacts do you wish to add? " << endl;
		cin >> tam;
		maxcontacts += tam;
		c1 = new contacts [maxcontacts];
		
		for (int i = 0; i < maxcontacts; i++) {
		cout << "Name of the new contact: " << endl;
		cin >> c1[i].name;
		
		cout << "Number of the new contact: " << endl;
		cin >> c1[i].number;
		
		}
		show_contacts ();
}
	void delete_contacts () {
		
		show_contacts();
		cout << "Which contact you wish to delete? " << endl;
		int position;
		cin >> position;
		
		for (int i = 0; i < maxcontacts; i++) {
			if (position == i) {
				c1[i].name = c1[i + 1].name;
				c1[i].number = c1[i+1].number;
				maxcontacts--;
			}
		}
		show_contacts();
	}
	
	
};

int main () {
	agenda a1;
	cout << "What is the max of contacts? " << endl;
	cin >> a1.maxcontacts; 
	int option;
	
	do {
		
		cout << "What do you want to do? " << endl;
		cout << "1- add contacts.  2- delete contacts.  3- show contacts. 0 = stop program" << endl;
		cin >> option;
		switch (option) {
			case 1:
				a1.add_contacts();
				break;
		
			case 2:
				a1.delete_contacts();
				break;
				
			case 3: 
				a1.show_contacts();
				break;
				
				default:
					cout << "Invalid option" << endl;
			}
		} while (option != 0);
		cout << "Program stopped" << endl;
	}
