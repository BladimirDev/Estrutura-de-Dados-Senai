#include <iostream>
using namespace std;

#define MAX 10

int main (){
	int lista[MAX] = {1, 2 , 3, 4};
	
	int aux = 4;
	lista[aux] = 5;
	aux++;
	
	for(int i = 0 ; i < MAX; i++){
		cout << lista[i] << " ";
	}
	cout << endl;
	
	int j = 0;
	for(int i = 0 ; i<MAX ; i++){
		if(lista[i] != 0){
			j++;
		}
	}
	
	cout << "A quantia de espacos cheios no array e: " << j << endl ;
}