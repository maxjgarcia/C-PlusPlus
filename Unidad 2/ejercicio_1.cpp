#include <iostream>

using namespace std;

/* Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL. */

int main()
{
	int num;
	cout<<"ingresar numero: ";
	cin>>num;
	
	if (num > 0){
	    cout<<"el num es positivo";
	} else if (num < 0){
	    cout<<"el num es negativo";
	} else {
	    cout<<"el num es 0";
	};
	
	return 0;
}
