#include <iostream>
using namespace std;

float average (float *salary , int *code , int size) {
	
	for (int i = 0; i < size; i++) {
		
	}
}

void informations (string *name , float *salary , int *code , int size) {
	float greatest = 0 , lowest = 0 , sum1 = 0 , sum2 = 0 , sum3 = 0 , sum4 = 0 , sum5 = 0 , total = 0;
	int c1 = 0 , c2 = 0 , c3 = 0 , c4 = 0 , c5 = 0
	for (int i = 0; i < size; i++) {
		cout << "Enter your name: " << endl;
		cin >> name[i];
		
		cout << "Enter your salary: " << endl;
		cin >> salary[i];
		
		cout << "Enter your sector code 1-5: " << endl;
		cin >> code[i];
		
		switch (code) {
			case 1:
				sum1 += salary[i];
				c1++;
				break;
			
			case 2:
				sum2 += salary[i];
				c2++;
				break;
				
			case 3:
				sum3 += salary[i];
				c3++;
				break;
				
			case 4:
				sum4 += salary[i];
				c4++;
				break;
				
			case 5:
				sum5 += salary[i];
				c5++;
				break;
				
			default:
				cout << "Invalid option" << endl;
		}
		
		total += salary[i];
	}
}

int main () {
	string *name;
	float *salary;
	int *code;
	int size = 0;
	
	cout << "What is the size? " << endl;
	cin >> size;
	name = new string [size];
	salary = new float [size];
	code = new int [size];
	
	informations(name , salary , code , size);
}
