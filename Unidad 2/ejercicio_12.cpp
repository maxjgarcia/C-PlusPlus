#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.

N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8 */

int main()
{
	int a, b, c, mid;


	cout<<"Ingresar numero: "; cin>> a ;
	cout<<"Ingresar numero: "; cin>> b ;
	cout<<"Ingresar numero: "; cin>> c ;

	if ((a > b && a < c) || (a < b && a > c)) {
		mid = a;
	} else if ((b > a && b < c) || (b < a && b > c)) {
		mid = b;
	} else {
		mid = c;
	}

	cout<<"Medio es " << mid <<endl;


	return 0;
}



