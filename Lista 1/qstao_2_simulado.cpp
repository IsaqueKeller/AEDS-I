#include <iostream>
using namespace std;

float total (float valorunitario_x , int quant_x , float IPI_x , float valorunitario_y , int quant_y , float IPI_y) {
	valorunitario_x = (IPI_x/100 *valorunitario_x) + valorunitario_x;
	valorunitario_y = (IPI_y/100 *valorunitario_y) + valorunitario_y;
	
	return (valorunitario_x *quant_x) + (valorunitario_y*quant_y);
}

int main () {
	float vx = 0 , ipix = 0 , vy = 0 , ipiy = 0;
	int qntx = 0 , qnty = 0;
	float valor = 0;
	
	cout << "Informe o valor unitario de x: " << endl;
	cin >> vx;
	
	cout << "Informe a quantidade de produtos de x: " << endl;
	cin >> qntx;
	
	cout << "Informe o IPI de x: " << endl;
	cin >> ipix;
	
	cout << "Informe o valor unitario de y: " << endl;
	cin >> vy;
	
	cout << "Informe a quantidade de produtos de y: " << endl;
	cin >> qnty;
	
	cout << "Informe o IPI de y: " << endl;
	cin >> ipiy;
	
	valor = total (vx , qntx , ipix , vy , qnty , ipiy);
	
	cout << valor << endl;
	if ((valor < 10000) and (valor > 5000)) {
		cout << "Lucro" << endl;
	}
	else if (valor > 10000) {
		cout << "Muito lucro" << endl;
	}
}
