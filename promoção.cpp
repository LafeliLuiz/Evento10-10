#include <iostream>

using namespace std;


int main () {
	float ano, tempo, sal, au10, au15, sal10, sal15;
	
	cout << "A quanto tempo vc trabalha em nossa empresa Sonic company: ";
	cin >> ano;
	cout << "E qual seu salario: ";
	cin >> sal;
	
	au10 = sal * 10 / 100;
	
	sal10 = au10 + sal;
	
	au15 = sal * 15 / 100;
	
	sal15 = au15 + sal;

	if ( ano < 5) {
		cout << "Pelo seu tempo de trabalho a empresa te oferece um aumento no seu salario de 10% que totaliza: " <<sal10;
	}
	else {
		
		cout << "Pelo seu tempo de trabalho a empresa te oferece um aumento no seu salario de 15% que totaliza: " <<sal15;
		
	}
	
	
	return 0;
}
