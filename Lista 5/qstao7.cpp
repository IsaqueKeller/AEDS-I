#include <iostream>
using namespace std;

struct football_team {
	string team;
	string city;
	int titles;
	
	void team_info (football_team & t1) {
		cout << "What is the name of the team? " << endl;
		cin >> t1.team;
		
		cout << "What is the team's city? " << endl;
		cin >> t1.city;
		
		cout << "How many titles does the team have? " << endl;
		cin >> t1.titles;
	}
	void printinfo (football_team & t1) {
		cout << "Team: " << t1.team << endl;
		cout << "City: " << t1.city << endl;
		cout << "Titles: " << t1.titles << endl;
	}
};

int main () {
	football_team t1;
	
	t1.team_info(t1);
	t1.printinfo(t1);
}
