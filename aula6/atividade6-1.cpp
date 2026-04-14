#include <iostream>
#include <stdlib.h>

using namespace std;

struct No {
    int dado;
    struct No *prox;
};

struct No *inicio = NULL;

void inserirInicio(int valor) {// Inserir no início
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;
    novo->prox = inicio;
    inicio = novo;
}

void inserirFinal(int valor) {// Inserir no final
    struct No *novo = (struct No*) malloc(sizeof(struct No));
    novo->dado = valor;
    novo->prox = NULL;

    if (inicio == NULL) {
        inicio = novo;
    } else {
        struct No *aux = inicio;
        while (aux->prox != NULL) {
            aux = aux->prox;
        }
        aux->prox = novo;
    }
}

void inserirApos(int ref, int valor) {// Inserir após um valor
    struct No *aux = inicio;

    while (aux != NULL && aux->dado != ref) {
        aux = aux->prox;
    }

    if (aux != NULL) {
        struct No *novo = (struct No*) malloc(sizeof(struct No));
        novo->dado = valor;
        novo->prox = aux->prox;
        aux->prox = novo;
    } else {
        cout << "Valor nao encontrado!" << endl;
    }
}

void remover(int valor) {// Remover valor
    struct No *atual = inicio;
    struct No *anterior = NULL;

    while (atual != NULL && atual->dado != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual != NULL) {
        if (anterior == NULL) {
            inicio = atual->prox;
        } else {
            anterior->prox = atual->prox;
        }
        free(atual);
        cout << "Removido com sucesso!" << endl;
    } else {
        cout << "Valor nao encontrado!" << endl;
    }
}

void exibir() {
    struct No *aux = inicio;// Exibir lista

    while (aux != NULL) {
        cout << aux->dado << " > ";
        aux = aux->prox;
    }
    cout << "NULL" << endl;
}

int main() {
    int opcao, valor, ref;

    do {
        cout << endl << "--- MENU ---" << endl;
        cout << "1. Inserir no inicio" << endl;
        cout << "2. Inserir no final" << endl;
        cout << "3. Inserir apos um valor" << endl;
        cout << "4. Remover um valor" << endl;
        cout << "5. Exibir lista" << endl;
        cout << "6. Sair" << endl;
        cout << "Escolha a sua Opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                inserirInicio(valor);
                break;

            case 2:
                cout << "Valor: ";
                cin >> valor;
                inserirFinal(valor);
                break;

            case 3:
                cout << "Inserir apos qual valor? ";
                cin >> ref;
                cout << "Novo valor: ";
                cin >> valor;
                inserirApos(ref, valor);
                break;

            case 4:
                cout << "Valor a remover: ";
                cin >> valor;
                remover(valor);
                break;

            case 5:
                exibir();
                break;

            case 6:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 6);

    return 0;
}