#include <iostream>

using namespace std;

/* Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada. 
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8. */

int main()
{
	int num1, num2, num3;
	
	cout<<"Ingresar numero 1: "; cin>>num1;
	cout<<"Ingresar numero 2: "; cin>>num2;
	cout<<"Ingresar numero 3: "; cin>>num3;
	
	if(num1 != num2 && num2 != num3 && num1 != num3){
	    cout<<"Los numeros no son iguales.";
	}
	
	return 0;
}
