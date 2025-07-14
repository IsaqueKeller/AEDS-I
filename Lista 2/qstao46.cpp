#include <iostream>
using namespace std;

float jump_test () {
	string name;
	float *distance;
	distance = new float [5];
	float total = 0;
	float best = 0 , worst = 9999;

		cout << "What is your name? (type 0 to end)" << endl;
		cin >> name;
	
		if (name == "0") {
			return 0;
		}
	
	for (int i = 0; i < 5; i++) {
	
		cout << "What is the distance of the # " << i+1 << " jump? " << endl;
		cin >> distance[i];
		total += distance[i];
		if (distance[i] > best) {
			best = distance[i];
		}
		else if (distance[i] < worst) {
			worst = distance[i];
			}
		} cout << endl;
	total -= best;
	total -= worst;
cout << "Athlete: " << name << " " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "#" << i+1 << " jump: " << distance[i] << " m" << endl;
	}
	cout << "--------------" << endl;
	cout << "Best jump: " << best << endl;
	cout << "Worst jump: " << worst << endl;
	cout << "Average of the other jumps: " << total/3 << endl;
	cout << "-------------" << endl;
	cout << "Final result: " << endl;
	cout << name << " " << total/3 << " m"<< endl;
	cout << endl;
	jump_test ();
}

int main () {
	jump_test ();
}
