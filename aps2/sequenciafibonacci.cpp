#include <iostream>
//Bladimir José Villarroel Guevara
using namespace std;

int main (){
    int pasado = 0;
    int anterior = 1;
    int result;
    int selecao;

    cout << "Para comecar escreva a quantia de termos da série fibonacci que voce quer gerar: ";
    cin >> selecao;

    cout << "Termo 1: " << pasado << endl;
    cout << "Termo 2: " << anterior << endl;

    for (int i = 0; i < selecao ; i++){
        result = pasado + anterior;
        cout << "termo " << i+3 << ":" << result << endl;
        pasado = anterior;
        anterior = result; 
    };
};