#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos. */

int main()
{
	int num1, num2, num3, num4, num5;
	int mayor, menor;
	cout<<"Ingresar numero 1: "; cin>>num1;
	cout<<"Ingresar numero 2: "; cin>>num2;
	cout<<"Ingresar numero 3: "; cin>>num3;
	cout<<"Ingresar numero 4: "; cin>>num4;
	cout<<"Ingresar numero 5: "; cin>>num5;

	mayor = num1;

	if (num2 > mayor) mayor = num2;
	else menor = num2;

	if (num3 > mayor) mayor = num3;
	if (num3 < menor) menor = num3;

	if (num4 > mayor) mayor = num4;
	if (num4 < menor) menor = num4;

	if (num5 > mayor) mayor = num5;
	if (num5 < menor) menor = num5;

	cout<<"El mayor numero es: "<<mayor<<endl;
	cout<<"El menor numero es: "<<menor;
	return 0;
}












