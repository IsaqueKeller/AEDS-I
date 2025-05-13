#include <iostream>
using namespace std;

void duration (int initial_hour , int final_hour) {
int total = 0;

if (initial_hour > final_hour) {
total = 24 - (initial_hour - final_hour); 
cout << "The duration of the game is: " << total << " hours." << endl;	
}	
 else {
 	total = final_hour - initial_hour;
 	cout << "The duration of the game is: " << total << " hours." << endl;
 }
}

int main (){
	int start = 0 , end = 0;
	cout << "What time is the start of the game? " << endl;
	cin >> start;
	
	cout << "What time is the end of the game? " << endl;
	cin >> end;
	
	duration (start , end);
}
