#include <iostream>
using namespace std;
/*100 kW, o custo é de R$0,50 por kW. A partir de 100, o custo é de R$0,75 por kW. A partir de 200 kW, o custo é de R$1,20 por kW 
A partir de 250 kW, o preço é de R$ 1,50 por kW. Ao final, deve-se acrescentar 20% do valor da conta para o pagamento de impostos.*/

float eletrical_bill (float eletric_usage , float price) {
	if (eletric_usage < 100) {
		price = 0.50;
		return (eletric_usage * price) *1.20;
	}
	else if (eletric_usage < 200) {
		price = 0.75;
		return (eletric_usage * price) * 1.20;
	}
	else if (eletric_usage < 250) {
		price = 1.20;
		return (eletric_usage * price) * 1.20;
	}
	else {
		price = 1.50;
		return (eletric_usage * price) * 1.20;
	}
}

int main () {
	float eletric_usage = 0 , price = 0;
	float result = 0;
	cout << "What is your eletrical usage? " << endl;
	cin >> eletric_usage;
	
	result = eletrical_bill (eletric_usage , price);
	
	cout << "The price is: " << result << endl;
}
