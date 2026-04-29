#include <iostream>
//Bladimir José Villarroel Guevara
using namespace std;

struct No{ // Criação da struct No
    int dado;
    struct No *prox;
};

struct No *inicio = NULL; //Criação do inicio da struct

void inserirFinal(int valor){ //Função para inserir o valor no final da lista encadeada
    struct No *novo = (struct No*) malloc(sizeof(struct No));

    novo->dado = valor;
    novo->prox = NULL;
    
    if (inicio == NULL) {
        inicio = novo;
    }else{
        struct No *aux = inicio;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void exibirFibonacci(){ // Função para exibir todos os dados armazenados na lista encadeada
    struct No *aux = inicio;

    while (aux != NULL) {
        cout << aux->dado;
        if (aux->prox != NULL) {
            cout << " -> ";
        }
        aux = aux->prox;
    }
    cout << endl;
}

int main (){ //Função principal
    int pasado = 0, anterior = 1, result, num;

    cout << "Quantos termos de fibonacci?: ";
    cin >> num;

    if (num >= 1 ) {
        inserirFinal(0);
    }
    if (num >= 2) {
        inserirFinal(1);
    }

    for (int i = 2; i < num ; i++){ //Criação e inserção dos termos na struct
        result = pasado + anterior;
        inserirFinal(result);
        pasado = anterior;
        anterior = result; 
    };
    exibirFibonacci();//mostramos a série(A quiantia que é pedida antes)
};