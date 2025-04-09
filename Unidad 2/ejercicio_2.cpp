#include <iostream>

using namespace std;

 /* Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo. */

int main()
{
	int num1, num2;
	cout<<"ingresar primer numero: ";
	cin>>num1;
	cout<<"ingresar segundo numero: ";
	cin>>num2;
	
    if(num1 % num2 == 0 || num2 % num1 == 0){
        cout<<"Si son multiplos";
    } else {
        cout<<"No son multiplos";
    }
	
	return 0;
}
