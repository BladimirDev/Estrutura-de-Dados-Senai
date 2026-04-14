#include <iostream>
using namespace std;

void maiorMenor (int *p, int *q){
	int aux;
	if (*p < *q) {
		aux = *q;
		*q = *p;
		*p = aux;
	}
}

int main () {
	int a, b;
	
	cout << "Digite o valor de A: " ;
	cin >> a;
	
	cout << "Digite o valor de B: ";
	cin >> b;
	
	cout << endl;
	
	maiorMenor(&a, &b);
	
	cout << "Valor final de A: " << a << endl;
	cout << "Valor final de B: " << b << endl;
	
	return 0;
	}
