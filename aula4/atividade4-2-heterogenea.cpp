#include <iostream>

using namespace std;

struct Produto{ //Heterogenea
		string nome;
		string unidade;
		int quantidade;
	};

int main (){
	
	int max = 5;
	
	Produto produtos[max];
	
	for (int i = 0; i < max; i++){
		cout << endl << "Articulo " << i+1 << endl;
		cout << "Nome do articulo: ";
		cin >> produtos[i].nome;
		cout << "Unidade de medida: ";
		cin >> produtos[i].unidade;
		cout << "Quantidade: ";
		cin >> produtos[i].quantidade;
	}
	
	cout << endl << "----------Dados armazenados----------" << endl;
	
	for (int i = 0; i<max ; i++){
		
		cout << "Item: " << produtos[i].nome << " | " << "Unidade de medida do articulo: " << produtos[i].unidade << " | " << "Quantidade: " << produtos[i].quantidade << endl;
	}
	
	return 0;
}

//Utilizar a estrutura heterogênea é melhor pelo simples motivo de que precisamos armazenar diferentes tipos de variáveis (string e int) então é muito mais fácil e organizado usar as structs, podendo armazenar esses dados no mesmo lugar e simplesmente acessar a eles depois, além de evitar confusões com os vetores, temos maior organização e maior praticidade.