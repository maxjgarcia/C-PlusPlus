#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor. 
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10. */

int main()
{
	int num1, num2, num3;
	int mayor, menor, medio;
	cout<<"Ingresar numero 1: "; cin>>num1;
	cout<<"Ingresar numero 2: "; cin>>num2;
	cout<<"Ingresar numero 3: "; cin>>num3;

	mayor = num1;
    menor = num1;
    medio = num1;
    
	if (num2 > mayor) mayor = num2;
	else menor = num2;

	if (num3 > mayor) mayor = num3;
	if (num3 > menor) medio = num3;
	else menor = num3;
	
	if (num2 < mayor && num2 > menor) medio = num2;
	if (num1 < medio) menor = num1;



	cout<<"El mayor numero es: "<<mayor<<endl;
	cout<<"El numero del medio es: "<<medio<<endl;
	cout<<"El menor numero es: "<<menor;
	
	return 0;
}



