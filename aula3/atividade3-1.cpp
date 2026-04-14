#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n;
	
	cout << "Quantos valores voce deseja armazenar?: ";
	cin >> n;
	
	int *vetor = (int*) malloc(n*sizeof(int)); // definimos o vetor dinamico
	
	for (int i = 0; i < n; i++){//laço for que pede o valor i do vetor
		vetor[i] = 0;
		
		cout << "Digite o valor n" << i+1 << ": ";
		cin >> vetor[i];//pedindo o valor i do vetor
	}
	
	for (int i = 0; i < n-1 ; i++){//laço for que ordena o vetor de maior a menor
		for (int j = 0; j < n - i - 1; j++){
			if (vetor[j] < vetor[j+1]){//organizando de maior a menor
				int aux;
				aux = vetor[j+1];
				vetor[j+1] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
		
	cout << "O menor valor e: " << vetor[n-1] << " e o maior valor e o " << vetor[0] << endl << endl; //mostrando os valores maior e menor
	
	for (int i = 0; i < n; i++){
		cout << vetor[i] << " ";
	}
	
	free(vetor);
}
