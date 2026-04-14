#include <iostream>

using namespace std;

int main (){ //Homogenea
	
	int max = 5;
	
	string nome[max];
	string unidade[max];
	int quantidade[max];
	
	for (int i = 0; i<max ; i++){
		cout << endl << "Articulo " << i+1 << endl;
		cout << "Nome do articulo: ";
		cin >> nome[i];
		cout << "Unidade de medida: ";
		cin >> unidade[i];
		cout << "Quantidade: ";
		cin >> quantidade[i];
	}
	
	cout << endl << "----------Dados armazenados----------" << endl;
	
	for (int i = 0; i<max ; i++){
		
		cout << "Item: " << nome[i] << " | " << "Unidade de medida do articulo: " << unidade[i] << " | " << "Quantidade: " << quantidade[i] << endl;
	}
	
	return 0;
}

