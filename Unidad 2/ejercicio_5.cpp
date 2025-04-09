#include <iostream>

using namespace std;

/* Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.*/

int main()
{
	float value, total;
	
	cout<<"ingresar valor: "; cin >> value;
	if (value < 100){
	   total = value * 0.95;
	}else if (value >= 100 && value < 500){
	   total = value * 0.9;
	}else{
	   total = value * 0.85;
	}
	
	cout<< "El valor con descuento es: " << total;
	
	return 0;
}
