#include <iostream>
using namespace std;

void funcaogeral (int opcao) {
    switch (opcao) {
        case 1:
        cout << "1- Jogo iniciado" << endl;
        break;

        case 2: 
        cout << "2- Configuracoes abertas" << endl;
        break;

        case 3: 
        cout << "3- Saindo do programa" << endl;
        break; 

        default:
        cout << "Opcao invalida" << endl;
    }
}

int main () {
    int opcao = 0;
    int a = 0 , b = 0 , c = 0;
    cout << "Insira um numero" << endl;
    cin >> opcao;
    
    funcaogeral(opcao);
    return 0;
}
