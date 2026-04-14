#include <iostream>

#define MAX 10

using namespace std;

int main(){

    int opcao = 0;
    int num = 0;
    int lista[MAX];
    int aux = 0;
    int loc = 0;
    int flag = 0;

    for(int i = 0 ; i < MAX ; i++){
        lista[i] = 0;
    }

    do {//laço do-while que repete o processo se não for selecionado sair
        cout<< endl <<"1 - Inserir elemento no final" << endl;
        cout << "2 - Inserir elemento em posição específica" << endl;
        cout << "3 - Remover elemento" << endl;
        cout << "4 - Buscar elemento" << endl;
        cout << "5 - Exibir lista" << endl;
        cout << "6 - Sair" << endl << endl;

        cin >> opcao;

        switch (opcao){
            case 1: 
                cout << "Digite o elemento a ser inserido: ";
                cin >> num;
                lista[aux] = num;
                aux++;
                break;
            case 2://Inserir elemento em posição específica
                cout << "Digite o a posicao da lista que voce quer preencher: ";
                cin >> loc;
                cout << "Digite o elemento a ser inserido: ";
                cin >> num;

                lista[loc] = num;
                break;
            case 3://Remover elemento
                cout << "Qual elemento deseja remover? ";
                cin >> num;
                for(int i = 0 ; i<MAX ; i++){
                    if(num == lista[i]){
                        lista[i] = 0;
                        cout << "Elemento removido" << endl;
                        flag = 1;
                    }
                }
                if (flag != 1){
                    cout << "Elemento nao valido!";
                }
                flag = 0;
               
                break;
            case 4://buscar elemento
                cout << "Qual elemento deseja buscar? ";
                cin >> num;
                for(int i = 0 ; i<MAX ; i++){
                    if(num == lista[i]){
                        cout << "O seu numero esta na posicao " << i << "!";
                        flag = 1;
                        break;
                    }
                }
                if (flag != 1){
                    cout << "Esse numero nao esta na lista!" << endl;
                }
                flag = 0;
                break;
            case 5://exibir lista
                for(int i = 0 ; i < MAX ; i++){
                    cout << "Termo " << i+1 << " -> " <<lista[i] << endl;
                }
                break;
            case 6: //Sair
                break;


            default: 
                cout << "Opcao invalida, digite um item da lista";
                break;
        }
    }while (opcao != 6);
    
    return 0;
}