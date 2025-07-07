#include <iostream>
using namespace std;

void calculus (int size , string *name , float *height , char *sex) {
	float greatest_height = 0;
	float lowest_height = 99999;
	char grheight_name;
	char lwheight_name;
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
		
		if (sex = 'F' or sex 'f') {
			sumwm += height[i];
			counterwm++;
		}
		
		if (height > greater_height) {
			greatest_height = height[i];
			grheight_name = name[i];
		}
		else if (height < lowest_height) {
			lowest_height = height[i];
			lwheight_name = name[i];
		}
	}
	cout << "The person with the greatest height is: " << grheight_name << " with " << greatest_height << endl;
	cout << "The person with the lowest height is: " << lwheight_name << " with " << lowest_height << endl;
	
	float averagewm = sumwm/counterwm;
	for (int i = 0; i < size; i++){
		
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
	
	
	calculus (name , height , sex);
}
