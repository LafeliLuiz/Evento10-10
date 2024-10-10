#include <iostream>


using namespace std;

const int Anu_atual = 2022; /* determinar o valor como constante (que não 
muda)*/

int main () {
	int anus, niveldeV, a, b;
	
	cout << "Digite o ano de nascimento: ";
	cin >> anus;
	niveldeV = Anu_atual - anus;
	
	/*codigo if*/
	if ( niveldeV >= 18) {   
		cout << "Maior de idade" <<endl;
	
  	}
		
	if ( niveldeV <= 17) { /* posso colocar o else sem o ()*/
		
		cout << "Menor de idade";
		a = Anu_atual - anus;
		b = 18 - a ;
		cout << ", ainda falta " << b << " anos para voce ser maior de idade";
    
	}
	
	return 0;
}
