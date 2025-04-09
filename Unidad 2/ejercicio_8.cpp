#include <iostream>

using namespace std;

/*
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar qué tipo de triángulo es: 
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí. */


int main()
{
	int num1, num2, num3;
	
	cout<<"Ingresar numero 1: "; cin>>num1;
	cout<<"Ingresar numero 2: "; cin>>num2;
	cout<<"Ingresar numero 3: "; cin>>num3;
	
	if(num1 == num2 && num2 == num3){
	    cout<<"Equilatero";
	}

	else if(num1 != num2 && num2 != num3 && num1 != num3){
	    cout<<"Escaleno";
	}
	
	else {
	     cout<<"Isosceles";
	}
	
	return 0;
}





