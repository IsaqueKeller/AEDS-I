#include <iostream>
using namespace std;

void classroom (int group) {
	int students = 0;
	int total = 0;
	
	for (int i = 1; i <= group; i ++) {
	do {
	
	cout << "How many students for classroom " << i << "?" << endl;
	cin >> students;
} while (students > 40);
	total += students;
}
	cout << "The average of students for each classroom is: " << total/group;
}

int main () {
	int group = 0;
	int students = 0;
do {
	cout << "How many classrooms? " << endl;
	cin >> group;
} while (group <= 0);
	
	classroom (group);	
return 0;
}
