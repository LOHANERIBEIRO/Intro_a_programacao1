#include <iostream>
using namespace std;
 int main() {

    float numero_1;
    float numero_2;
    float numero_3;

    cout <<"Entre com Valores: " << endl;
    cout << "Valor numero 1: "; cin >> numero_1;
    cout << "Valor numero 2: "; cin >> numero_2;
    cout << "Valor numero 3: "; cin >> numero_3;

    float soma = numero_1 + numero_2 + numero_3;
    cout << "Soma: " << soma << endl;

    float media = soma / 3;
    cout << "Media: " << media << endl;

    float produto = numero_1 * numero_2 * numero_3 ;
    cout << "Produto: " << produto << endl;

    float subtracao = numero_1 - numero_2 - numero_3;
    cout << "Subtracao: " << subtracao << endl;

}

