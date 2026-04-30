#include <iostream>
using namespace std;
//implementação de funções para uma lista duplamente encadeada

struct No {
    int dado;
    struct No *prox;
    struct No *ant;
    
};

struct No *inicio = NULL;

void inserirInicio(int valor) {// Inserir no início
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;

    novo->prox = inicio;
    novo->ant = NULL;

    if (inicio != NULL) {
        inicio->ant = novo;
    }
}

void inserirFinal(int valor) {// Inserir no final
    struct No *novo = (struct No*) malloc(sizeof(struct No));

    novo->dado = valor;
    novo->prox = NULL;

    if (inicio == NULL) {
        cout << "A lista não tem um incio, por favor insertar inicio!!" << endl;
    }

    struct No *aux = inicio;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }

    aux->prox = novo;
    novo->ant = aux;
}

int main (){
    int a;
};