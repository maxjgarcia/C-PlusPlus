#include <iostream>

using namespace std;

/* Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar. */

int main()
{
	int num;
	cout<<"ingresar numero: ";
	cin>>num;
	
	if (num != 0 && num % 2 == 0){
	    cout<<"el num es par";
	} else if (num % 2 == 1){
	    cout<<"el num es impar";
	} else {
	    cout<<"el num es 0";
	};
	
	return 0;
}
