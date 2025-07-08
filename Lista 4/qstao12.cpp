#include <iostream>
using namespace std;

void calculus (int size , string *name , float *height , char *sex) {
	float greatest_height = 0;
	float lowest_height = 99999;
	string grheight_name;
	string lwheight_name;
	float sumwm = 0;
	float sum = 0;
	int wmcounter = 0;
	for (int i = 0; i < size; i++){
		cout << "What is your name?" << endl;
		cin >> name[i];
		
		cout << "What is your height?" << endl;
		cin >> height[i];
		
		cout << "What is your sex?" << endl;
		cin >> sex[i];
		
		sum += height[i];
		
		if (sex[i] == 'F' or sex[i] =='f') {
			sumwm += height[i];
			wmcounter++;
		}
		
		if (height[i] > greatest_height) {
			greatest_height = height[i];
			grheight_name = name[i];
		}
		else if (height[i] < lowest_height) {
			lowest_height = height[i];
			lwheight_name = name[i];
		}
	} cout << endl;
	cout << "The person with the greatest height is: " << grheight_name << " with " << greatest_height << endl;
	cout << "The person with the lowest height is: " << lwheight_name << " with " << lowest_height << endl;
	cout << endl;
	float averagewm = sumwm/wmcounter;
	cout << "Women with height below average: " << endl;
		for (int i = 0; i < size; i++){
		if (sex[i] == 'F' or sex[i] == 'f') {
			if (height [i] > averagewm) {
				cout << name[i] << endl;
			}	
		}
	} cout << endl;
	cout << "People with height above average: " << endl;
	for (int i = 0; i < size; i++){
		if (height[i] > sum/size) {
			cout << name[i] << endl;
		}
	}
}

int main (){
	int size;
	string *name;
	float *height;
	char *sex;
	
	cout << "Insert the size: " << endl;
	cin >> size;
	
	name = new string [size];
	height = new float [size];
	sex = new char [size];
	
	
	calculus (size , name , height , sex);
}
