#include <iostream>

using namespace std;

/* Hacer un programa para ingresar por teclado tres números y luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.*/

int main()
{
	int num1, num2, num3;
	
	cout<<"Ingresar numero 1: "; cin>>num1;
	cout<<"Ingresar numero 2: "; cin>>num2;
	cout<<"Ingresar numero 3: "; cin>>num3;
	
	if(num1 == num2 && num2 == num3){
	    cout<<"Los numeros son iguales.";
	}
	
	return 0;
}
