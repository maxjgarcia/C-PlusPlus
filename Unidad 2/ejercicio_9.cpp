#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar tres números y listar el máximo de ellos. */

int main()
{
	int num1, num2, num3;
	
	cout<<"Ingresar numero 1: "; cin>>num1;
	cout<<"Ingresar numero 2: "; cin>>num2;
	cout<<"Ingresar numero 3: "; cin>>num3;
	
	int mayor = num1;
	
	if (num2 > mayor) mayor = num2;
	
	if (num3 > mayor) mayor = num3;
	
	
cout<<"El mayor numero es: "<<mayor;

	return 0;
}








