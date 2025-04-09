#include <iostream>

using namespace std;

/* Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos, cuántos son negativos y cuantos son iguales a 0. */

int main()
{
	int num;
	int pos=0, neg=0, zero=0;
	
	for (int i=0; i<5; i++){
	    cout<<"ingresar numero: "; cin>>num;
	    
	    if (num > 0) pos ++;
	    else if (num == 0) zero ++;
	    else neg ++;
	 
	}
	
	cout<<"Positivo: " << par <<endl;
	cout<<"Negativo: " << imp <<endl;
	cout<<"Cero: " << zero;
	
	return 0;
}
